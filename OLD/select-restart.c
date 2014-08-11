/* Why does select() keep falling out on a signal? */
/* Signals tend to cause blocked system calls to return -1 with errno set to EINTR. When you set up a signal handler with sigaction(), you can set the flag SA_RESTART, which is supposed to restart the system call after it was interrupted. */

/* Naturally, this doesn't always work. */

/* My favorite solution to this involves a goto statement. You know this irritates your professors to no end, so go for it! */

select_restart:
if ((err = select(fdmax+1, &readfds, NULL, NULL, NULL)) == -1) {
    if (errno == EINTR) {
        // some signal just interrupted us, so restart
        goto select_restart;
    }
    // handle the real error here:
    perror("select");
} 

/* Sure, you don't need to use goto in this case; you can use other structures to control it. But I think the goto statement is actually cleaner. */
