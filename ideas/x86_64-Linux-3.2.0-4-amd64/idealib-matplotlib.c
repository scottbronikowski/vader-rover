
/* SCHEME->C */

#include <objects.h>

void idealib_2dmatplotlib__init();
DEFSTATICTSCP( c13475 );
DEFSTATICTSCP( c13474 );
DEFSTATICTSCP( t13503 );
DEFSTATICTSCP( t13504 );
DEFSTATICTSCP( t13505 );
DEFSTATICTSCP( t13506 );
DEFSTATICTSCP( t13507 );
DEFSTATICTSCP( t13508 );
DEFCSTRING( t13509, "Y" );
DEFSTATICTSCP( c13473 );
DEFCSTRING( t13510, "X" );
DEFSTATICTSCP( c13472 );
DEFCSTRING( t13511, "Wee a title" );
DEFSTATICTSCP( c13471 );
DEFCSTRING( t13512, "d" );
DEFSTATICTSCP( c13470 );
DEFCSTRING( t13513, "c" );
DEFSTATICTSCP( c13469 );
DEFCSTRING( t13514, "b" );
DEFSTATICTSCP( c13468 );
DEFCSTRING( t13515, "a" );
DEFSTATICTSCP( c13467 );
DEFSTATICTSCP( c13464 );
DEFSTATICTSCP( c13463 );
DEFSTATICTSCP( c13451 );
DEFSTATICTSCP( c13450 );
DEFSTATICTSCP( c13449 );
DEFCSTRING( t13517, "True" );
DEFSTATICTSCP( t13516 );
DEFCSTRING( t13519, "cumulative" );
DEFSTATICTSCP( t13518 );
DEFCSTRING( t13520, "plot.ylim([" );
DEFSTATICTSCP( c13274 );
DEFCSTRING( t13521, "])" );
DEFSTATICTSCP( c13270 );
DEFCSTRING( t13522, "plot.xlim([" );
DEFSTATICTSCP( c13269 );
DEFCSTRING( t13523, "plot.axes().set_yscale('log')" );
DEFSTATICTSCP( c13265 );
DEFCSTRING( t13524, "    label.set_rotation('vertical')" );
DEFSTATICTSCP( c13263 );
DEFCSTRING( t13525, "    label.set_rotation(30)" );
DEFSTATICTSCP( c13259 );
DEFCSTRING( t13526, "for label in labels:" );
DEFSTATICTSCP( c13258 );
DEFCSTRING( t13527, "labels = plot.axes().get_xticklabels()" );
DEFSTATICTSCP( c13257 );
DEFCSTRING( t13528, "plot.axes().set_aspect('equal')" );
DEFSTATICTSCP( c13253 );
DEFCSTRING( t13529, "] = np.linspace(data[" );
DEFSTATICTSCP( c13244 );
DEFCSTRING( t13530, "],None)" );
DEFSTATICTSCP( c13243 );
DEFCSTRING( t13531, "),data[" );
DEFSTATICTSCP( c13242 );
DEFCSTRING( t13532, "][-1]," );
DEFSTATICTSCP( c13241 );
DEFCSTRING( t13533, "][0],data[" );
DEFSTATICTSCP( c13240 );
DEFCSTRING( t13534, "] = mlab.stineman_interp(np.linspace(data[" );
DEFSTATICTSCP( c13239 );
DEFCSTRING( t13535, "data[" );
DEFSTATICTSCP( c13238 );
DEFCSTRING( t13536, " )" );
DEFSTATICTSCP( c13233 );
DEFCSTRING( t13537, ") " );
DEFSTATICTSCP( c13232 );
DEFCSTRING( t13538, "ax.set_xticklabels( (" );
DEFSTATICTSCP( c13231 );
DEFCSTRING( t13539, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c13227 );
DEFSTATICTSCP( c13226 );
DEFCSTRING( t13540, ")+" );
DEFSTATICTSCP( c13219 );
DEFCSTRING( t13541, "ax.set_xticks(np.arange(" );
DEFSTATICTSCP( c13218 );
DEFCSTRING( t13542, "plot.title('" );
DEFSTATICTSCP( c13213 );
DEFCSTRING( t13543, "ax = plot.subplot(" );
DEFSTATICTSCP( c13175 );
DEFCSTRING( t13544, "ax = plot.figure().add_subplot(" );
DEFSTATICTSCP( c13169 );
DEFCSTRING( t13545, "], " );
DEFSTATICTSCP( c13163 );
DEFCSTRING( t13546, ", data[" );
DEFSTATICTSCP( c13162 );
DEFCSTRING( t13547, "]))+" );
DEFSTATICTSCP( c13161 );
DEFCSTRING( t13548, "ax.bar(np.arange(len(data[" );
DEFSTATICTSCP( c13160 );
DEFCSTRING( t13549, "ax.set_zlim3d(" );
DEFSTATICTSCP( c13154 );
DEFCSTRING( t13550, "ax.set_zlabel('Z')" );
DEFSTATICTSCP( c13153 );
DEFCSTRING( t13551, "ax.set_ylim3d(" );
DEFSTATICTSCP( c13152 );
DEFCSTRING( t13552, "ax.set_ylabel('Y')" );
DEFSTATICTSCP( c13151 );
DEFCSTRING( t13553, ", " );
DEFSTATICTSCP( c13150 );
DEFCSTRING( t13554, "ax.set_xlim3d(" );
DEFSTATICTSCP( c13149 );
DEFCSTRING( t13555, "ax.set_xlabel('X')" );
DEFSTATICTSCP( c13148 );
DEFCSTRING( t13556, "], zdir='y', offset=" );
DEFSTATICTSCP( c13143 );
DEFCSTRING( t13557, "], zdir='x', offset=-" );
DEFSTATICTSCP( c13142 );
DEFCSTRING( t13558, "], zdir='z', offset=" );
DEFSTATICTSCP( c13141 );
DEFCSTRING( t13559, "], data[" );
DEFSTATICTSCP( c13140 );
DEFCSTRING( t13560, "ax.contour(data[" );
DEFSTATICTSCP( c13139 );
DEFCSTRING( t13561, 
            "]), rstride=1, cstride=1, cmap=cm.Blues, alpha=0.3)" );
DEFSTATICTSCP( c13131 );
DEFCSTRING( t13562, "ax.plot_surface(np.array(data[" );
DEFSTATICTSCP( c13130 );
DEFCSTRING( t13563, "]), rstride=1, cstride=1)" );
DEFSTATICTSCP( c13125 );
DEFCSTRING( t13564, "]), np.array(data[" );
DEFSTATICTSCP( c13124 );
DEFCSTRING( t13565, "ax.plot_wireframe(np.array(data[" );
DEFSTATICTSCP( c13123 );
DEFCSTRING( t13566, "ax = plot.figure().gca(projection='3d')" );
DEFSTATICTSCP( c13118 );
DEFCSTRING( t13567, "." );
DEFSTATICTSCP( c12984 );
DEFCSTRING( t13568, "]," );
DEFSTATICTSCP( c12969 );
DEFCSTRING( t13569, "plot.hist(data[" );
DEFSTATICTSCP( c12968 );
DEFCSTRING( t13570, "plot.zlabel('" );
DEFSTATICTSCP( c12963 );
DEFCSTRING( t13571, "plot.ylabel('" );
DEFSTATICTSCP( c12960 );
DEFCSTRING( t13572, "plot.xlabel('" );
DEFSTATICTSCP( c12957 );
DEFCSTRING( t13573, 
            "ax.xaxis.set_minor_locator(WeekdayLocator(byweekday=6))" );
DEFSTATICTSCP( c12954 );
DEFCSTRING( t13574, 
            "ax.xaxis.set_major_formatter(DateFormatter('%B'))" );
DEFSTATICTSCP( c12953 );
DEFCSTRING( t13575, 
            "from matplotlib.dates import DateFormatter, WeekdayLocator" );
DEFSTATICTSCP( c12952 );
DEFCSTRING( t13576, "-" );
DEFSTATICTSCP( c12951 );
DEFCSTRING( t13577, 
            "data[0] = [datetime.timedelta(weeks=i) + datetime.datetime(2011\
,7,31) for i in data[0]]" );
DEFSTATICTSCP( c12950 );
DEFCSTRING( t13578, "import random, datetime, pylab" );
DEFSTATICTSCP( c12947 );
DEFCSTRING( t13579, "ax.grid(True)" );
DEFSTATICTSCP( c12943 );
DEFCSTRING( t13580, "'" );
DEFSTATICTSCP( c12888 );
DEFCSTRING( t13581, "," );
DEFSTATICTSCP( c12885 );
DEFCSTRING( t13582, "=" );
DEFSTATICTSCP( c12869 );
DEFCSTRING( t13583, ")" );
DEFSTATICTSCP( c12776 );
DEFCSTRING( t13584, "]" );
DEFSTATICTSCP( c12775 );
DEFCSTRING( t13585, "],data[" );
DEFSTATICTSCP( c12774 );
DEFCSTRING( t13586, "p = plot.plot(data[" );
DEFSTATICTSCP( c12773 );
DEFCSTRING( t13587, "/tmp/matplotlib-imlib.png" );
DEFSTATICTSCP( c12731 );
DEFCSTRING( t13588, "')" );
DEFSTATICTSCP( c12715 );
DEFCSTRING( t13589, "plot.savefig('" );
DEFSTATICTSCP( c12714 );
DEFCSTRING( t13590, "plot.show()" );
DEFSTATICTSCP( c12711 );
DEFCSTRING( t13591, "plot.draw()" );
DEFSTATICTSCP( c12710 );
DEFSTATICTSCP( c12709 );
DEFCSTRING( t13593, "  exit(0)" );
DEFSTATICTSCP( t13592 );
DEFCSTRING( t13595, "if(pid != 0):" );
DEFSTATICTSCP( t13594 );
DEFCSTRING( t13597, "pid = os.fork()" );
DEFSTATICTSCP( t13596 );
DEFCSTRING( t13598, "').read().splitlines())).asList()[0]" );
DEFSTATICTSCP( c12708 );
DEFCSTRING( t13599, "data = sexp.sexp.parseString(''.join(open('" );
DEFSTATICTSCP( c12707 );
DEFCSTRING( t13600, "import sexp" );
DEFSTATICTSCP( c12704 );
DEFCSTRING( t13601, "/darpa-collaboration/ideas/')" );
DEFSTATICTSCP( c12703 );
DEFCSTRING( t13602, "HOME" );
DEFSTATICTSCP( c12702 );
DEFCSTRING( t13603, "sys.path.append('" );
DEFSTATICTSCP( c12701 );
DEFCSTRING( t13604, "import sys" );
DEFSTATICTSCP( c12700 );
DEFCSTRING( t13605, "import os" );
DEFSTATICTSCP( c12699 );
DEFCSTRING( t13606, "import numpy as np" );
DEFSTATICTSCP( c12698 );
DEFCSTRING( t13607, "from mpl_toolkits.mplot3d import axes3d" );
DEFSTATICTSCP( c12697 );
DEFCSTRING( t13608, "from matplotlib import cm" );
DEFSTATICTSCP( c12696 );
DEFCSTRING( t13609, "import matplotlib.mlab as mlab" );
DEFSTATICTSCP( c12695 );
DEFCSTRING( t13610, "import matplotlib.pyplot as plot" );
DEFSTATICTSCP( c12694 );
DEFCSTRING( t13611, "import matplotlib.patches as mpatches" );
DEFSTATICTSCP( c12693 );
DEFCSTRING( t13612, "import matplotlib.path as mpath" );
DEFSTATICTSCP( c12692 );
DEFCSTRING( t13613, "matplotlib.use('GtkAgg')" );
DEFSTATICTSCP( c12691 );
DEFCSTRING( t13614, "import matplotlib" );
DEFSTATICTSCP( c12690 );
DEFCSTRING( t13615, "/tmp/data" );
DEFSTATICTSCP( c12686 );
DEFCSTRING( t13616, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c12629 );
DEFSTATICTSCP( c12628 );
DEFCSTRING( t13617, " " );
DEFSTATICTSCP( c12591 );
DEFCSTRING( t13618, "LD_LIBRARY_PATH= python " );
DEFSTATICTSCP( c12590 );
DEFCSTRING( t13619, "/tmp/data.py" );
DEFSTATICTSCP( c12587 );
DEFCSTRING( t13620, "/tmp/code.py" );
DEFSTATICTSCP( c12584 );

static void  init_constants()
{
        c13475 = DOUBLE_TSCP( 2.25 );
        CONSTANTEXP( ADR( c13475 ) );
        c13474 = EMPTYLIST;
        t13503 = DOUBLE_TSCP( 6.2 );
        c13474 = CONS( t13503, c13474 );
        t13504 = DOUBLE_TSCP( 5.1 );
        c13474 = CONS( t13504, c13474 );
        t13505 = DOUBLE_TSCP( 1.9 );
        c13474 = CONS( t13505, c13474 );
        t13506 = DOUBLE_TSCP( -0.4 );
        c13474 = CONS( t13506, c13474 );
        t13507 = DOUBLE_TSCP( -1.3 );
        c13474 = CONS( t13507, c13474 );
        t13508 = DOUBLE_TSCP( -2.1 );
        c13474 = CONS( t13508, c13474 );
        CONSTANTEXP( ADR( c13474 ) );
        c13473 = CSTRING_TSCP( t13509 );
        CONSTANTEXP( ADR( c13473 ) );
        c13472 = CSTRING_TSCP( t13510 );
        CONSTANTEXP( ADR( c13472 ) );
        c13471 = CSTRING_TSCP( t13511 );
        CONSTANTEXP( ADR( c13471 ) );
        c13470 = CSTRING_TSCP( t13512 );
        CONSTANTEXP( ADR( c13470 ) );
        c13469 = CSTRING_TSCP( t13513 );
        CONSTANTEXP( ADR( c13469 ) );
        c13468 = CSTRING_TSCP( t13514 );
        CONSTANTEXP( ADR( c13468 ) );
        c13467 = CSTRING_TSCP( t13515 );
        CONSTANTEXP( ADR( c13467 ) );
        c13464 = EMPTYLIST;
        c13464 = CONS( _TSCP( 160 ), c13464 );
        c13464 = CONS( _TSCP( 120 ), c13464 );
        c13464 = CONS( _TSCP( 80 ), c13464 );
        c13464 = CONS( _TSCP( 40 ), c13464 );
        CONSTANTEXP( ADR( c13464 ) );
        c13463 = EMPTYLIST;
        c13463 = CONS( _TSCP( 200 ), c13463 );
        c13463 = CONS( _TSCP( 80 ), c13463 );
        c13463 = CONS( _TSCP( 200 ), c13463 );
        c13463 = CONS( _TSCP( 160 ), c13463 );
        CONSTANTEXP( ADR( c13463 ) );
        c13451 = EMPTYLIST;
        c13451 = CONS( _TSCP( 24 ), c13451 );
        c13451 = CONS( _TSCP( 20 ), c13451 );
        c13451 = CONS( _TSCP( 16 ), c13451 );
        c13451 = CONS( _TSCP( 12 ), c13451 );
        CONSTANTEXP( ADR( c13451 ) );
        c13450 = EMPTYLIST;
        c13450 = CONS( _TSCP( 16 ), c13450 );
        c13450 = CONS( _TSCP( 12 ), c13450 );
        c13450 = CONS( _TSCP( 8 ), c13450 );
        c13450 = CONS( _TSCP( 4 ), c13450 );
        CONSTANTEXP( ADR( c13450 ) );
        c13449 = EMPTYLIST;
        t13516 = CSTRING_TSCP( t13517 );
        c13449 = CONS( t13516, c13449 );
        t13518 = CSTRING_TSCP( t13519 );
        c13449 = CONS( t13518, c13449 );
        CONSTANTEXP( ADR( c13449 ) );
        c13274 = CSTRING_TSCP( t13520 );
        CONSTANTEXP( ADR( c13274 ) );
        c13270 = CSTRING_TSCP( t13521 );
        CONSTANTEXP( ADR( c13270 ) );
        c13269 = CSTRING_TSCP( t13522 );
        CONSTANTEXP( ADR( c13269 ) );
        c13265 = CSTRING_TSCP( t13523 );
        CONSTANTEXP( ADR( c13265 ) );
        c13263 = CSTRING_TSCP( t13524 );
        CONSTANTEXP( ADR( c13263 ) );
        c13259 = CSTRING_TSCP( t13525 );
        CONSTANTEXP( ADR( c13259 ) );
        c13258 = CSTRING_TSCP( t13526 );
        CONSTANTEXP( ADR( c13258 ) );
        c13257 = CSTRING_TSCP( t13527 );
        CONSTANTEXP( ADR( c13257 ) );
        c13253 = CSTRING_TSCP( t13528 );
        CONSTANTEXP( ADR( c13253 ) );
        c13244 = CSTRING_TSCP( t13529 );
        CONSTANTEXP( ADR( c13244 ) );
        c13243 = CSTRING_TSCP( t13530 );
        CONSTANTEXP( ADR( c13243 ) );
        c13242 = CSTRING_TSCP( t13531 );
        CONSTANTEXP( ADR( c13242 ) );
        c13241 = CSTRING_TSCP( t13532 );
        CONSTANTEXP( ADR( c13241 ) );
        c13240 = CSTRING_TSCP( t13533 );
        CONSTANTEXP( ADR( c13240 ) );
        c13239 = CSTRING_TSCP( t13534 );
        CONSTANTEXP( ADR( c13239 ) );
        c13238 = CSTRING_TSCP( t13535 );
        CONSTANTEXP( ADR( c13238 ) );
        c13233 = CSTRING_TSCP( t13536 );
        CONSTANTEXP( ADR( c13233 ) );
        c13232 = CSTRING_TSCP( t13537 );
        CONSTANTEXP( ADR( c13232 ) );
        c13231 = CSTRING_TSCP( t13538 );
        CONSTANTEXP( ADR( c13231 ) );
        c13227 = CSTRING_TSCP( t13539 );
        CONSTANTEXP( ADR( c13227 ) );
        c13226 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c13226 ) );
        c13219 = CSTRING_TSCP( t13540 );
        CONSTANTEXP( ADR( c13219 ) );
        c13218 = CSTRING_TSCP( t13541 );
        CONSTANTEXP( ADR( c13218 ) );
        c13213 = CSTRING_TSCP( t13542 );
        CONSTANTEXP( ADR( c13213 ) );
        c13175 = CSTRING_TSCP( t13543 );
        CONSTANTEXP( ADR( c13175 ) );
        c13169 = CSTRING_TSCP( t13544 );
        CONSTANTEXP( ADR( c13169 ) );
        c13163 = CSTRING_TSCP( t13545 );
        CONSTANTEXP( ADR( c13163 ) );
        c13162 = CSTRING_TSCP( t13546 );
        CONSTANTEXP( ADR( c13162 ) );
        c13161 = CSTRING_TSCP( t13547 );
        CONSTANTEXP( ADR( c13161 ) );
        c13160 = CSTRING_TSCP( t13548 );
        CONSTANTEXP( ADR( c13160 ) );
        c13154 = CSTRING_TSCP( t13549 );
        CONSTANTEXP( ADR( c13154 ) );
        c13153 = CSTRING_TSCP( t13550 );
        CONSTANTEXP( ADR( c13153 ) );
        c13152 = CSTRING_TSCP( t13551 );
        CONSTANTEXP( ADR( c13152 ) );
        c13151 = CSTRING_TSCP( t13552 );
        CONSTANTEXP( ADR( c13151 ) );
        c13150 = CSTRING_TSCP( t13553 );
        CONSTANTEXP( ADR( c13150 ) );
        c13149 = CSTRING_TSCP( t13554 );
        CONSTANTEXP( ADR( c13149 ) );
        c13148 = CSTRING_TSCP( t13555 );
        CONSTANTEXP( ADR( c13148 ) );
        c13143 = CSTRING_TSCP( t13556 );
        CONSTANTEXP( ADR( c13143 ) );
        c13142 = CSTRING_TSCP( t13557 );
        CONSTANTEXP( ADR( c13142 ) );
        c13141 = CSTRING_TSCP( t13558 );
        CONSTANTEXP( ADR( c13141 ) );
        c13140 = CSTRING_TSCP( t13559 );
        CONSTANTEXP( ADR( c13140 ) );
        c13139 = CSTRING_TSCP( t13560 );
        CONSTANTEXP( ADR( c13139 ) );
        c13131 = CSTRING_TSCP( t13561 );
        CONSTANTEXP( ADR( c13131 ) );
        c13130 = CSTRING_TSCP( t13562 );
        CONSTANTEXP( ADR( c13130 ) );
        c13125 = CSTRING_TSCP( t13563 );
        CONSTANTEXP( ADR( c13125 ) );
        c13124 = CSTRING_TSCP( t13564 );
        CONSTANTEXP( ADR( c13124 ) );
        c13123 = CSTRING_TSCP( t13565 );
        CONSTANTEXP( ADR( c13123 ) );
        c13118 = CSTRING_TSCP( t13566 );
        CONSTANTEXP( ADR( c13118 ) );
        c12984 = CSTRING_TSCP( t13567 );
        CONSTANTEXP( ADR( c12984 ) );
        c12969 = CSTRING_TSCP( t13568 );
        CONSTANTEXP( ADR( c12969 ) );
        c12968 = CSTRING_TSCP( t13569 );
        CONSTANTEXP( ADR( c12968 ) );
        c12963 = CSTRING_TSCP( t13570 );
        CONSTANTEXP( ADR( c12963 ) );
        c12960 = CSTRING_TSCP( t13571 );
        CONSTANTEXP( ADR( c12960 ) );
        c12957 = CSTRING_TSCP( t13572 );
        CONSTANTEXP( ADR( c12957 ) );
        c12954 = CSTRING_TSCP( t13573 );
        CONSTANTEXP( ADR( c12954 ) );
        c12953 = CSTRING_TSCP( t13574 );
        CONSTANTEXP( ADR( c12953 ) );
        c12952 = CSTRING_TSCP( t13575 );
        CONSTANTEXP( ADR( c12952 ) );
        c12951 = CSTRING_TSCP( t13576 );
        CONSTANTEXP( ADR( c12951 ) );
        c12950 = CSTRING_TSCP( t13577 );
        CONSTANTEXP( ADR( c12950 ) );
        c12947 = CSTRING_TSCP( t13578 );
        CONSTANTEXP( ADR( c12947 ) );
        c12943 = CSTRING_TSCP( t13579 );
        CONSTANTEXP( ADR( c12943 ) );
        c12888 = CSTRING_TSCP( t13580 );
        CONSTANTEXP( ADR( c12888 ) );
        c12885 = CSTRING_TSCP( t13581 );
        CONSTANTEXP( ADR( c12885 ) );
        c12869 = CSTRING_TSCP( t13582 );
        CONSTANTEXP( ADR( c12869 ) );
        c12776 = CSTRING_TSCP( t13583 );
        CONSTANTEXP( ADR( c12776 ) );
        c12775 = CSTRING_TSCP( t13584 );
        CONSTANTEXP( ADR( c12775 ) );
        c12774 = CSTRING_TSCP( t13585 );
        CONSTANTEXP( ADR( c12774 ) );
        c12773 = CSTRING_TSCP( t13586 );
        CONSTANTEXP( ADR( c12773 ) );
        c12731 = CSTRING_TSCP( t13587 );
        CONSTANTEXP( ADR( c12731 ) );
        c12715 = CSTRING_TSCP( t13588 );
        CONSTANTEXP( ADR( c12715 ) );
        c12714 = CSTRING_TSCP( t13589 );
        CONSTANTEXP( ADR( c12714 ) );
        c12711 = CSTRING_TSCP( t13590 );
        CONSTANTEXP( ADR( c12711 ) );
        c12710 = CSTRING_TSCP( t13591 );
        CONSTANTEXP( ADR( c12710 ) );
        c12709 = EMPTYLIST;
        t13592 = CSTRING_TSCP( t13593 );
        c12709 = CONS( t13592, c12709 );
        t13594 = CSTRING_TSCP( t13595 );
        c12709 = CONS( t13594, c12709 );
        t13596 = CSTRING_TSCP( t13597 );
        c12709 = CONS( t13596, c12709 );
        CONSTANTEXP( ADR( c12709 ) );
        c12708 = CSTRING_TSCP( t13598 );
        CONSTANTEXP( ADR( c12708 ) );
        c12707 = CSTRING_TSCP( t13599 );
        CONSTANTEXP( ADR( c12707 ) );
        c12704 = CSTRING_TSCP( t13600 );
        CONSTANTEXP( ADR( c12704 ) );
        c12703 = CSTRING_TSCP( t13601 );
        CONSTANTEXP( ADR( c12703 ) );
        c12702 = CSTRING_TSCP( t13602 );
        CONSTANTEXP( ADR( c12702 ) );
        c12701 = CSTRING_TSCP( t13603 );
        CONSTANTEXP( ADR( c12701 ) );
        c12700 = CSTRING_TSCP( t13604 );
        CONSTANTEXP( ADR( c12700 ) );
        c12699 = CSTRING_TSCP( t13605 );
        CONSTANTEXP( ADR( c12699 ) );
        c12698 = CSTRING_TSCP( t13606 );
        CONSTANTEXP( ADR( c12698 ) );
        c12697 = CSTRING_TSCP( t13607 );
        CONSTANTEXP( ADR( c12697 ) );
        c12696 = CSTRING_TSCP( t13608 );
        CONSTANTEXP( ADR( c12696 ) );
        c12695 = CSTRING_TSCP( t13609 );
        CONSTANTEXP( ADR( c12695 ) );
        c12694 = CSTRING_TSCP( t13610 );
        CONSTANTEXP( ADR( c12694 ) );
        c12693 = CSTRING_TSCP( t13611 );
        CONSTANTEXP( ADR( c12693 ) );
        c12692 = CSTRING_TSCP( t13612 );
        CONSTANTEXP( ADR( c12692 ) );
        c12691 = CSTRING_TSCP( t13613 );
        CONSTANTEXP( ADR( c12691 ) );
        c12690 = CSTRING_TSCP( t13614 );
        CONSTANTEXP( ADR( c12690 ) );
        c12686 = CSTRING_TSCP( t13615 );
        CONSTANTEXP( ADR( c12686 ) );
        c12629 = CSTRING_TSCP( t13616 );
        CONSTANTEXP( ADR( c12629 ) );
        c12628 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c12628 ) );
        c12591 = CSTRING_TSCP( t13617 );
        CONSTANTEXP( ADR( c12591 ) );
        c12590 = CSTRING_TSCP( t13618 );
        CONSTANTEXP( ADR( c12590 ) );
        c12587 = CSTRING_TSCP( t13619 );
        CONSTANTEXP( ADR( c12587 ) );
        c12584 = CSTRING_TSCP( t13620 );
        CONSTANTEXP( ADR( c12584 ) );
}

DEFTSCP( idealib_2dmatplotlib_python_v );
DEFCSTRING( t13621, "PYTHON" );
EXTERNTSCPP( obischeme_ary_2dfile_15e4569d, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme_ary_2dfile_15e4569d_v );
EXTERNTSCPP( qobischeme_write_2dfile, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_write_2dfile_v );
EXTERNTSCPP( ib_2dmisc_m_2doutput_38ec6a1e, XAL1( TSCP ) );
EXTERNTSCP( ib_2dmisc_m_2doutput_38ec6a1e_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );

TSCP  idealib_2dmatplotlib_l12588( d12589, c13625 )
        TSCP  d12589, c13625;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12588 [inside PYTHON]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c13625, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13625, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13625, 2 );
        qobischeme_write_2dfile( DISPLAY( 0 ), 
                                 DISPLAY( 2 ) );
        qobischeme_write_2dfile( DISPLAY( 1 ), d12589 );
        X6 = CONS( d12589, EMPTYLIST );
        X6 = CONS( c12591, X6 );
        X6 = CONS( DISPLAY( 2 ), X6 );
        X5 = scrt3_string_2dappend( CONS( c12590, X6 ) );
        X4 = ib_2dmisc_m_2doutput_38ec6a1e( X5 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 1 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  idealib_2dmatplotlib_l12585( c12586, c13623 )
        TSCP  c12586, c13623;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12585 [inside PYTHON]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13623, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13623, 1 );
        DISPLAY( 2 ) = c12586;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12588, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        X3 = obischeme_ary_2dfile_15e4569d( c12587, X4 );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  idealib_2dmatplotlib_python( p12582, d12583 )
        TSCP  p12582, d12583;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13621 );
        DISPLAY( 0 ) = p12582;
        DISPLAY( 1 ) = d12583;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12585, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        SDVAL = obischeme_ary_2dfile_15e4569d( c12584, X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( idealib_2dmatplotlib_minimuml_v );
DEFCSTRING( t13627, "MINIMUML" );
EXTERNTSCPP( toollib_2dmisc_minimum, XAL1( TSCP ) );
EXTERNTSCP( toollib_2dmisc_minimum_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  idealib_2dmatplotlib_minimuml( l12593 )
        TSCP  l12593;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13627 );
        X2 = l12593;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L13631:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L13632;
        X1 = X3;
        goto L13639;
L13632:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L13635;
        scrt1__24__car_2derror( X2 );
L13635:
        X7 = PAIR_CAR( X2 );
        X6 = toollib_2dmisc_minimum( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13638;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L13631 );
L13638:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L13643;
        scdebug_error( c12628, 
                       c12629, CONS( X4, EMPTYLIST ) );
L13643:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L13631 );
L13639:
        POPSTACKTRACE( toollib_2dmisc_minimum( X1 ) );
}

DEFTSCP( idealib_2dmatplotlib_maximuml_v );
DEFCSTRING( t13645, "MAXIMUML" );
EXTERNTSCPP( toollib_2dmisc_maximum, XAL1( TSCP ) );
EXTERNTSCP( toollib_2dmisc_maximum_v );

TSCP  idealib_2dmatplotlib_maximuml( l12640 )
        TSCP  l12640;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13645 );
        X2 = l12640;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L13649:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L13650;
        X1 = X3;
        goto L13657;
L13650:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L13653;
        scrt1__24__car_2derror( X2 );
L13653:
        X7 = PAIR_CAR( X2 );
        X6 = toollib_2dmisc_maximum( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13656;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L13649 );
L13656:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L13661;
        scdebug_error( c12628, 
                       c12629, CONS( X4, EMPTYLIST ) );
L13661:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L13649 );
L13657:
        POPSTACKTRACE( toollib_2dmisc_maximum( X1 ) );
}

DEFTSCP( atplotlib_ect_2dfile_a3ad084a_v );
DEFCSTRING( t13663, "WITH-TEMPORARY-OBJECT-FILE" );
EXTERNTSCPP( obischeme_dto_2dfile_ae5c74d4, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme_dto_2dfile_ae5c74d4_v );

TSCP  idealib_2dmatplotlib_l12687( f12688, c13665 )
        TSCP  f12688, c13665;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12687 [inside WITH-TEMPORARY-\
OBJECT-FILE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13665, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13665, 1 );
        obischeme_dto_2dfile_ae5c74d4( DISPLAY( 0 ), f12688 );
        X4 = DISPLAY( 1 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( f12688, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  atplotlib_ect_2dfile_a3ad084a( o12684, f12685 )
        TSCP  o12684, f12685;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13663 );
        DISPLAY( 0 ) = o12684;
        DISPLAY( 1 ) = f12685;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12687, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        SDVAL = obischeme_ary_2dfile_15e4569d( c12686, X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_2dincludes_2315b75_v );
DEFCSTRING( t13667, "MPLOT-PY-INCLUDES" );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( qobischeme_getenv, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_getenv_v );

TSCP  atplotlib_2dincludes_2315b75(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13667 );
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = CONS( c12704, X1 );
        X2 = CONS( c12703, EMPTYLIST );
        X2 = CONS( qobischeme_getenv( c12702 ), X2 );
        X1 = CONS( scrt3_string_2dappend( CONS( c12701, X2 ) ), 
                   X1 );
        X1 = CONS( c12700, X1 );
        X1 = CONS( c12699, X1 );
        X1 = CONS( c12698, X1 );
        X1 = CONS( c12697, X1 );
        X1 = CONS( c12696, X1 );
        X1 = CONS( c12695, X1 );
        X1 = CONS( c12694, X1 );
        X1 = CONS( c12693, X1 );
        X1 = CONS( c12692, X1 );
        POPSTACKTRACE( scrt1_cons_2a( c12690, 
                                      CONS( c12691, X1 ) ) );
}

DEFTSCP( atplotlib_ead_2ddata_abc822d2_v );
DEFCSTRING( t13669, "MPLOT-PY-READ-DATA" );

TSCP  atplotlib_ead_2ddata_abc822d2( f12706 )
        TSCP  f12706;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13669 );
        X2 = CONS( c12708, EMPTYLIST );
        X2 = CONS( f12706, X2 );
        X1 = scrt3_string_2dappend( CONS( c12707, X2 ) );
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
}

DEFTSCP( atplotlib_y_2ddetach_60639398_v );
DEFCSTRING( t13671, "MPLOT-PY-DETACH" );
DEFTSCP( atplotlib_2donscreen_bacbf9ef_v );
DEFCSTRING( t13672, "MPLOT-PY-ONSCREEN" );
DEFTSCP( atplotlib_y_2dfigure_9cb073e2_v );
DEFCSTRING( t13673, "MPLOT-PY-FIGURE" );

TSCP  atplotlib_y_2dfigure_9cb073e2( o12713 )
        TSCP  o12713;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13673 );
        X2 = CONS( c12715, EMPTYLIST );
        X2 = CONS( o12713, X2 );
        X1 = scrt3_string_2dappend( CONS( c12714, X2 ) );
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
}

DEFTSCP( atplotlib_2donscreen_798d3b4b_v );
DEFCSTRING( t13675, "MPLOT-RUN-ONSCREEN" );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );

TSCP  idealib_2dmatplotlib_l12718( s12719, c13677 )
        TSCP  s12719, c13677;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12718 [inside MPLOT-RUN-ONSCR\
EEN]" );
        X3 = atplotlib_2dincludes_2315b75(  );
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = scrt1_append_2dtwo( atplotlib_2donscreen_bacbf9ef_v, X10 );
        X8 = scrt1_cons_2a( X9, EMPTYLIST );
        X7 = scrt1_append_2dtwo( atplotlib_y_2ddetach_60639398_v, X8 );
        X6 = scrt1_cons_2a( X7, EMPTYLIST );
        X5 = scrt1_append_2dtwo( s12719, X6 );
        X4 = scrt1_cons_2a( X5, EMPTYLIST );
        X2 = scrt1_append_2dtwo( X3, X4 );
        X1 = scrt1_cons_2a( X2, EMPTYLIST );
        POPSTACKTRACE( idealib_2dmatplotlib_python( X1, EMPTYLIST ) );
}

TSCP  atplotlib_2donscreen_798d3b4b( p12717 )
        TSCP  p12717;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13675 );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12718, EMPTYLIST );
        X1 = p12717;
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( atplotlib_run_2dcode_e901b9cf_v );
DEFCSTRING( t13679, "MPLOT-RUN-CODE" );
EXTERNTSCPP( scrt6_pp, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_pp_v );

TSCP  idealib_2dmatplotlib_l12722( s12723, c13681 )
        TSCP  s12723, c13681;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12722 [inside MPLOT-RUN-CODE]\
" );
        X3 = atplotlib_2dincludes_2315b75(  );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_append_2dtwo( atplotlib_2donscreen_bacbf9ef_v, X8 );
        X6 = scrt1_cons_2a( X7, EMPTYLIST );
        X5 = scrt1_append_2dtwo( s12723, X6 );
        X4 = scrt1_cons_2a( X5, EMPTYLIST );
        X2 = scrt1_append_2dtwo( X3, X4 );
        X1 = scrt1_cons_2a( X2, EMPTYLIST );
        POPSTACKTRACE( scrt6_pp( X1, EMPTYLIST ) );
}

TSCP  atplotlib_run_2dcode_e901b9cf( p12721 )
        TSCP  p12721;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13679 );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12722, EMPTYLIST );
        X1 = p12721;
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( atplotlib_n_2dfigure_f10cf86_v );
DEFCSTRING( t13683, "MPLOT-RUN-FIGURE" );

TSCP  idealib_2dmatplotlib_l12727( s12728, c13685 )
        TSCP  s12728, c13685;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12727 [inside MPLOT-RUN-FIGUR\
E]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13685, 0 );
        X5 = atplotlib_2dincludes_2315b75(  );
        X10 = atplotlib_y_2dfigure_9cb073e2( DISPLAY( 0 ) );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = scrt1_append_2dtwo( X10, X11 );
        X8 = scrt1_cons_2a( X9, EMPTYLIST );
        X7 = scrt1_append_2dtwo( s12728, X8 );
        X6 = scrt1_cons_2a( X7, EMPTYLIST );
        X4 = scrt1_append_2dtwo( X5, X6 );
        X3 = scrt1_cons_2a( X4, EMPTYLIST );
        X2 = idealib_2dmatplotlib_python( X3, EMPTYLIST );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  atplotlib_n_2dfigure_f10cf86( o12725, p12726 )
        TSCP  o12725, p12726;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13683 );
        DISPLAY( 0 ) = o12725;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12727, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = p12726;
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_un_2dimlib_ea911072_v );
DEFCSTRING( t13687, "MPLOT-RUN-IMLIB" );

TSCP  idealib_2dmatplotlib_l12734( s12735, c13691 )
        TSCP  s12735, c13691;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12734 [inside MPLOT-RUN-IMLIB\
]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13691, 0 );
        X5 = atplotlib_2dincludes_2315b75(  );
        X10 = atplotlib_y_2dfigure_9cb073e2( DISPLAY( 1 ) );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = scrt1_append_2dtwo( X10, X11 );
        X8 = scrt1_cons_2a( X9, EMPTYLIST );
        X7 = scrt1_append_2dtwo( s12735, X8 );
        X6 = scrt1_cons_2a( X7, EMPTYLIST );
        X4 = scrt1_append_2dtwo( X5, X6 );
        X3 = scrt1_cons_2a( X4, EMPTYLIST );
        X2 = idealib_2dmatplotlib_python( X3, EMPTYLIST );
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCP( rocessing_diately_21_d4e7b00f_v );

TSCP  idealib_2dmatplotlib_l12732( f12733, c13689 )
        TSCP  f12733, c13689;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12732 [inside MPLOT-RUN-IMLIB\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13689, 0 );
        DISPLAY( 1 ) = f12733;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12734, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        VIA( PROCEDURE_CODE( X3 ) )( X4, PROCEDURE_CLOSURE( X3 ) );
        X3 = rocessing_diately_21_d4e7b00f_v;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 1 ), 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  atplotlib_un_2dimlib_ea911072( p12730 )
        TSCP  p12730;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13687 );
        DISPLAY( 0 ) = p12730;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12732, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = obischeme_ary_2dfile_15e4569d( c12731, X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_d_3e_3e_3d_42f4407e_v );
DEFCSTRING( t13693, "MPLOT->>=" );

TSCP  idealib_2dmatplotlib_l12743( s12744, c13699 )
        TSCP  s12744, c13699;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12743 [inside MPLOT->>=]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c13699, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c13699, 1 );
        X5 = scrt1_append_2dtwo( DISPLAY( 3 ), s12744 );
        X4 = DISPLAY( 2 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 2 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  idealib_2dmatplotlib_l12741( s12742, c13697 )
        TSCP  s12742, c13697;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12741 [inside MPLOT->>=]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c13697, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13697, 1 );
        DISPLAY( 3 ) = s12742;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12743, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ) ) );
        X4 = DISPLAY( 1 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        SDVAL = X3;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  idealib_2dmatplotlib_l12739( r12740, c13695 )
        TSCP  r12740, c13695;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12739 [inside MPLOT->>=]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13695, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13695, 1 );
        DISPLAY( 2 ) = r12740;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12741, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ) ) );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  atplotlib_d_3e_3e_3d_42f4407e( a12737, b12738 )
        TSCP  a12737, b12738;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13693 );
        DISPLAY( 0 ) = a12737;
        DISPLAY( 1 ) = b12738;
        SDVAL = MAKEPROCEDURE( 1, 
                               0, 
                               idealib_2dmatplotlib_l12739, 
                               MAKECLOSURE( EMPTYLIST, 
                                            2, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_e_3e_3d_2a_a4e3502a_v );
DEFCSTRING( t13701, "MPLOT->>=*" );
EXTERNTSCPP( qobischeme_reduce, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reduce_v );
EXTERNTSCPP( atplotlib_t_2dreturn_873c0e7, XAL1( TSCP ) );
EXTERNTSCP( atplotlib_t_2dreturn_873c0e7_v );
EXTERNTSCP( sc_emptystring );

TSCP  atplotlib_e_3e_3d_2a_a4e3502a( a12746, b12747 )
        TSCP  a12746, b12747;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13701 );
        X1 = sc_cons( a12746, b12747 );
        X2 = atplotlib_t_2dreturn_873c0e7( sc_emptystring );
        POPSTACKTRACE( qobischeme_reduce( atplotlib_d_3e_3e_3d_42f4407e_v, 
                                          X1, X2 ) );
}

DEFTSCP( atplotlib_t_2dreturn_873c0e7_v );
DEFCSTRING( t13703, "MPLOT-RETURN" );
EXTERNTSCPP( scrt1_list_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt1_list_3f_v );
EXTERNTSCPP( qobischeme_fuck_2dup, XAL0(  ) );
EXTERNTSCP( qobischeme_fuck_2dup_v );

TSCP  idealib_2dmatplotlib_l12752( r12753, c13711 )
        TSCP  r12753, c13711;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12752 [inside MPLOT-RETURN]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13711, 0 );
        X3 = r12753;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  atplotlib_t_2dreturn_873c0e7( s12749 )
        TSCP  s12749;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13703 );
        if  ( FALSE( scrt1_list_3f( s12749 ) ) )  goto L13705;
        DISPLAY( 0 ) = s12749;
        goto L13708;
L13705:
        if  ( NOT( AND( EQ( TSCPTAG( s12749 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( s12749 ), 
                            STRINGTAG ) ) ) )  goto L13707;
        X1 = sc_cons( s12749, EMPTYLIST );
        DISPLAY( 0 ) = X1;
        goto L13708;
L13707:
        DISPLAY( 0 ) = qobischeme_fuck_2dup(  );
L13708:
        SDVAL = MAKEPROCEDURE( 1, 
                               0, 
                               idealib_2dmatplotlib_l12752, 
                               MAKECLOSURE( EMPTYLIST, 
                                            1, DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_2donscreen_2392b12e_v );
DEFCSTRING( t13713, "MPLOT-ONSCREEN" );
EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );

TSCP  atplotlib_2donscreen_2392b12e( c12759, c12760 )
        TSCP  c12759, c12760;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13713 );
        X2 = sc_cons( c12759, c12760 );
        X1 = sc_apply_2dtwo( atplotlib_e_3e_3d_2a_a4e3502a_v, X2 );
        POPSTACKTRACE( atplotlib_2donscreen_798d3b4b( X1 ) );
}

DEFTSCP( atplotlib_lot_2dcode_4e7ffcf9_v );
DEFCSTRING( t13715, "MPLOT-CODE" );

TSCP  atplotlib_lot_2dcode_4e7ffcf9( c12762, c12763 )
        TSCP  c12762, c12763;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13715 );
        X2 = sc_cons( c12762, c12763 );
        X1 = sc_apply_2dtwo( atplotlib_e_3e_3d_2a_a4e3502a_v, X2 );
        POPSTACKTRACE( atplotlib_run_2dcode_e901b9cf( X1 ) );
}

DEFTSCP( atplotlib_t_2dfigure_80ba4c92_v );
DEFCSTRING( t13717, "MPLOT-FIGURE" );

TSCP  atplotlib_t_2dfigure_80ba4c92( o12765, c12766, c12767 )
        TSCP  o12765, c12766, c12767;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13717 );
        X2 = sc_cons( c12766, c12767 );
        X1 = sc_apply_2dtwo( atplotlib_e_3e_3d_2a_a4e3502a_v, X2 );
        POPSTACKTRACE( atplotlib_n_2dfigure_f10cf86( o12765, X1 ) );
}

DEFTSCP( atplotlib_ata_2dplot_e3e52923_v );
DEFCSTRING( t13719, "MPLOT-DATA-PLOT" );
EXTERNTSCPP( atplotlib_s_2dappend_6433b438, XAL1( TSCP ) );
EXTERNTSCP( atplotlib_s_2dappend_6433b438_v );
EXTERNTSCPP( atplotlib_e_2doption_b2faa2e4, XAL1( TSCP ) );
EXTERNTSCP( atplotlib_e_2doption_b2faa2e4_v );
EXTERNTSCPP( atplotlib_ult_2dbare_8e3417ec, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( atplotlib_ult_2dbare_8e3417ec_v );

TSCP  atplotlib_ata_2dplot_e3e52923( a12769, 
                                     b12770, d12771, o12772 )
        TSCP  a12769, b12770, d12771, o12772;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13719 );
        X2 = CONS( c12776, EMPTYLIST );
        X3 = atplotlib_ult_2dbare_8e3417ec( d12771, o12772 );
        X2 = CONS( atplotlib_e_2doption_b2faa2e4( X3 ), X2 );
        X2 = CONS( c12775, X2 );
        X2 = CONS( b12770, X2 );
        X2 = CONS( c12774, X2 );
        X2 = CONS( a12769, X2 );
        X1 = atplotlib_s_2dappend_6433b438( CONS( c12773, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_lot_2dplot_87d143e8_v );
DEFCSTRING( t13721, "MPLOT-PLOT" );
EXTERNTSCPP( atplotlib_ead_2ddata_11b2f261, XAL1( TSCP ) );
EXTERNTSCP( atplotlib_ead_2ddata_11b2f261_v );

TSCP  atplotlib_lot_2dplot_87d143e8( x12778, 
                                     y12779, d12780, o12781 )
        TSCP  x12778, y12779, d12780, o12781;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13721 );
        X4 = sc_cons( y12779, EMPTYLIST );
        X3 = sc_cons( x12778, X4 );
        X2 = X3;
        X1 = atplotlib_ead_2ddata_11b2f261( X2 );
        X4 = CONS( o12781, EMPTYLIST );
        X4 = CONS( d12780, X4 );
        X3 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 4 ), X4 ) );
        X2 = sc_apply_2dtwo( atplotlib_ata_2dplot_e3e52923_v, X3 );
        POPSTACKTRACE( atplotlib_d_3e_3e_3d_42f4407e( X1, X2 ) );
}

DEFTSCP( atplotlib_how_2dplot_c7c37a1_v );
DEFCSTRING( t13724, "MPLOT-SHOW-PLOT" );

TSCP  atplotlib_how_2dplot_c7c37a1( x12786, 
                                    y12787, d12788, o12789 )
        TSCP  x12786, y12787, d12788, o12789;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13724 );
        X3 = CONS( o12789, EMPTYLIST );
        X3 = CONS( d12788, X3 );
        X2 = scrt1_cons_2a( x12786, CONS( y12787, X3 ) );
        X1 = sc_apply_2dtwo( atplotlib_lot_2dplot_87d143e8_v, X2 );
        POPSTACKTRACE( atplotlib_2donscreen_798d3b4b( X1 ) );
}

DEFTSCP( atplotlib_ead_2ddata_11b2f261_v );
DEFCSTRING( t13726, "MPLOT-READ-DATA" );

TSCP  idealib_2dmatplotlib_l12794( f12795, c13730 )
        TSCP  f12795, c13730;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12794 [inside MPLOT-READ-DATA\
]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13730, 0 );
        X4 = atplotlib_ead_2ddata_abc822d2( f12795 );
        X3 = DISPLAY( 1 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  idealib_2dmatplotlib_l12792( f12793, c13728 )
        TSCP  f12793, c13728;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12792 [inside MPLOT-READ-DATA\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13728, 0 );
        DISPLAY( 1 ) = f12793;
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l12794, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        X2 = atplotlib_ect_2dfile_a3ad084a( DISPLAY( 0 ), X3 );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  atplotlib_ead_2ddata_11b2f261( d12791 )
        TSCP  d12791;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13726 );
        DISPLAY( 0 ) = d12791;
        SDVAL = MAKEPROCEDURE( 1, 
                               0, 
                               idealib_2dmatplotlib_l12792, 
                               MAKECLOSURE( EMPTYLIST, 
                                            1, DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_s_2dappend_6433b438_v );
DEFCSTRING( t13732, "STRING*OPTIONS-APPEND" );
EXTERNTSCPP( atplotlib_d_3estring_5180ea49, XAL1( TSCP ) );
EXTERNTSCP( atplotlib_d_3estring_5180ea49_v );
EXTERNTSCPP( scrt2_number_2d_3estring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_number_2d_3estring_v );

TSCP  atplotlib_s_2dappend_6433b438( o12797 )
        TSCP  o12797;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13732 );
        if  ( EQ( _S2CUINT( o12797 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L13734;
        if  ( EQ( TSCPTAG( o12797 ), PAIRTAG ) )  goto L13739;
        scrt1__24__car_2derror( o12797 );
L13739:
        X1 = PAIR_CAR( o12797 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), STRINGTAG ) ) )
            )  goto L13736;
        X2 = PAIR_CDR( o12797 );
        X1 = CONS( sc_apply_2dtwo( atplotlib_s_2dappend_6433b438_v, X2 ), 
                   EMPTYLIST );
        POPSTACKTRACE( scrt3_string_2dappend( CONS( PAIR_CAR( o12797 ), 
                                                    X1 ) ) );
L13736:
        if  ( EQ( TSCPTAG( o12797 ), PAIRTAG ) )  goto L13744;
        scrt1__24__car_2derror( o12797 );
L13744:
        X1 = PAIR_CAR( o12797 );
        X2 = BOOLEAN( EQ( TSCPTAG( X1 ), FIXNUMTAG ) );
        if  ( TRUE( X2 ) )  goto L13751;
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), DOUBLEFLOATTAG ) )
            )  goto L13751;
        X3 = PAIR_CAR( o12797 );
        if  ( FALSE( scrt1_list_3f( X3 ) ) )  goto L13754;
        X4 = PAIR_CDR( o12797 );
        X3 = CONS( sc_apply_2dtwo( atplotlib_s_2dappend_6433b438_v, X4 ), 
                   EMPTYLIST );
        X4 = PAIR_CAR( o12797 );
        POPSTACKTRACE( scrt3_string_2dappend( CONS( atplotlib_d_3estring_5180ea49( X4 ), 
                                                    X3 ) ) );
L13754:
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
L13734:
        POPSTACKTRACE( sc_emptystring );
L13751:
        X2 = PAIR_CDR( o12797 );
        X1 = CONS( sc_apply_2dtwo( atplotlib_s_2dappend_6433b438_v, X2 ), 
                   EMPTYLIST );
        X2 = PAIR_CAR( o12797 );
        POPSTACKTRACE( scrt3_string_2dappend( CONS( scrt2_number_2d_3estring( X2, 
                                                                              EMPTYLIST ), 
                                                    X1 ) ) );
}

DEFTSCP( atplotlib_keyword_3f_8a68956b_v );
DEFCSTRING( t13761, "MPLOT-OPTION-KEYWORD?" );
EXTERNTSCPP( qobischeme__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3d_2dtwo_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );

TSCP  atplotlib_keyword_3f_8a68956b( o12852 )
        TSCP  o12852;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13761 );
        X1 = scrt1_list_3f( o12852 );
        if  ( FALSE( X1 ) )  goto L13764;
        X2 = scrt1_length( o12852 );
        POPSTACKTRACE( qobischeme__3d_2dtwo( X2, _TSCP( 8 ) ) );
L13764:
        POPSTACKTRACE( X1 );
}

DEFTSCP( atplotlib__2dbare_3f_230305c9_v );
DEFCSTRING( t13766, "MPLOT-OPTION-BARE?" );

TSCP  atplotlib__2dbare_3f_230305c9( o12862 )
        TSCP  o12862;
{
        PUSHSTACKTRACE( t13766 );
        if  ( TRUE( scrt1_list_3f( o12862 ) ) )  goto L13768;
        POPSTACKTRACE( TRUEVALUE );
L13768:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( atplotlib_d_3estring_6394ffd1_v );
DEFCSTRING( t13770, "MPLOT-OPTION->STRING" );
EXTERNTSCPP( b_2dstuff_a_2dappend_2ada51f7, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_a_2dappend_2ada51f7_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );

TSCP  atplotlib_d_3estring_6394ffd1( o12864 )
        TSCP  o12864;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13770 );
        if  ( FALSE( atplotlib_keyword_3f_8a68956b( o12864 ) )
            )  goto L13772;
        if  ( EQ( TSCPTAG( o12864 ), PAIRTAG ) )  goto L13775;
        scrt1__24__cdr_2derror( o12864 );
L13775:
        X2 = PAIR_CDR( o12864 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L13778;
        scrt1__24__car_2derror( X2 );
L13778:
        X1 = CONS( PAIR_CAR( X2 ), EMPTYLIST );
        X1 = CONS( c12869, X1 );
        POPSTACKTRACE( b_2dstuff_a_2dappend_2ada51f7( CONS( PAIR_CAR( o12864 ), 
                                                            X1 ) ) );
L13772:
        if  ( TRUE( atplotlib__2dbare_3f_230305c9( o12864 ) )
            )  goto L13781;
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
L13781:
        POPSTACKTRACE( o12864 );
}

DEFTSCP( atplotlib_d_3estring_5180ea49_v );
DEFCSTRING( t13783, "MPLOT-OPTIONS->STRING" );
EXTERNTSCPP( toollib_2dmisc_foldl, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_foldl_v );

TSCP  idealib_2dmatplotlib_l12882( a12883, b12884, c13785 )
        TSCP  a12883, b12884, c13785;
{
        TSCP  X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l12882 [inside MPLOT-OPTIONS->\
STRING]" );
        X1 = CONS( atplotlib_d_3estring_6394ffd1( b12884 ), 
                   EMPTYLIST );
        X1 = CONS( c12885, X1 );
        POPSTACKTRACE( b_2dstuff_a_2dappend_2ada51f7( CONS( a12883, X1 ) ) );
}

TSCP  atplotlib_d_3estring_5180ea49( o12881 )
        TSCP  o12881;
{
        TSCP  X1;

        PUSHSTACKTRACE( t13783 );
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            idealib_2dmatplotlib_l12882, EMPTYLIST );
        POPSTACKTRACE( toollib_2dmisc_foldl( X1, 
                                             o12881, sc_emptystring ) );
}

DEFTSCP( atplotlib_e_2doption_b2faa2e4_v );
DEFCSTRING( t13787, "MPLOT-QUOTE-BARE-OPTION" );
EXTERNTSCPP( qobischeme_some, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_some_v );
EXTERNTSCPP( qobischeme_remove_2dif_2dnot, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_remove_2dif_2dnot_v );
EXTERNTSCPP( qobischeme_remove_2dif, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_remove_2dif_v );

TSCP  atplotlib_e_2doption_b2faa2e4( o12887 )
        TSCP  o12887;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13787 );
        if  ( FALSE( qobischeme_some( atplotlib__2dbare_3f_230305c9_v, 
                                      o12887, EMPTYLIST ) ) )  goto L13789;
        X2 = CONS( c12888, EMPTYLIST );
        X4 = qobischeme_remove_2dif_2dnot( atplotlib__2dbare_3f_230305c9_v, 
                                           o12887 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L13792;
        scrt1__24__car_2derror( X4 );
L13792:
        X3 = PAIR_CAR( X4 );
        X2 = CONS( atplotlib_d_3estring_6394ffd1( X3 ), X2 );
        X1 = b_2dstuff_a_2dappend_2ada51f7( CONS( c12888, X2 ) );
        X2 = qobischeme_remove_2dif( atplotlib__2dbare_3f_230305c9_v, 
                                     o12887 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L13789:
        POPSTACKTRACE( o12887 );
}

DEFTSCP( atplotlib__2doptions_6ed9fc45_v );
DEFCSTRING( t13794, "MPLOT-QUOTE-BARE-OPTIONS" );

TSCP  atplotlib__2doptions_6ed9fc45( o12894 )
        TSCP  o12894;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13794 );
        X1 = o12894;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L13797:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L13798;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L13801;
        scrt1__24__car_2derror( X1 );
L13801:
        X6 = PAIR_CAR( X1 );
        if  ( FALSE( atplotlib__2dbare_3f_230305c9( X6 ) ) )  goto L13804;
        X7 = CONS( c12888, EMPTYLIST );
        X7 = CONS( atplotlib_d_3estring_6394ffd1( X6 ), X7 );
        X5 = b_2dstuff_a_2dappend_2ada51f7( CONS( c12888, X7 ) );
        goto L13805;
L13804:
        X5 = X6;
L13805:
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L13807;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L13797 );
L13807:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L13812;
        scdebug_error( c12628, 
                       c12629, CONS( X3, EMPTYLIST ) );
L13812:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L13797 );
L13798:
        POPSTACKTRACE( X2 );
}

DEFTSCP( atplotlib_ult_2dbare_8e3417ec_v );
DEFCSTRING( t13814, "MPLOT-OPTION-ADD-DEFAULT-BARE" );

TSCP  atplotlib_ult_2dbare_8e3417ec( d12940, o12941 )
        TSCP  d12940, o12941;
{
        PUSHSTACKTRACE( t13814 );
        if  ( TRUE( qobischeme_some( atplotlib__2dbare_3f_230305c9_v, 
                                     o12941, EMPTYLIST ) ) )  goto L13816;
        POPSTACKTRACE( sc_cons( d12940, o12941 ) );
L13816:
        POPSTACKTRACE( o12941 );
}

DEFTSCP( atplotlib_id_2dlines_73104866_v );
DEFCSTRING( t13818, "MPLOT-GRID-LINES" );

TSCP  atplotlib_id_2dlines_73104866(  )
{
        PUSHSTACKTRACE( t13818 );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( c12943 ) );
}

DEFTSCP( atplotlib_ate_2dline_8001ca6_v );
DEFCSTRING( t13820, "MPLOT-DATE-LINE" );

TSCP  atplotlib_ate_2dline_8001ca6( x12945, y12946 )
        TSCP  x12945, y12946;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13820 );
        X1 = atplotlib_t_2dreturn_873c0e7( c12947 );
        X2 = CONS( atplotlib_t_2dreturn_873c0e7( c12954 ), 
                   EMPTYLIST );
        X2 = CONS( atplotlib_t_2dreturn_873c0e7( c12953 ), X2 );
        X2 = CONS( atplotlib_t_2dreturn_873c0e7( c12952 ), X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c12951, X4 );
        X3 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 4 ), X4 ) );
        X2 = CONS( sc_apply_2dtwo( atplotlib_ata_2dplot_e3e52923_v, X3 ), 
                   X2 );
        X2 = CONS( atplotlib_t_2dreturn_873c0e7( c12950 ), X2 );
        X5 = sc_cons( y12946, EMPTYLIST );
        X4 = sc_cons( x12945, X5 );
        X3 = X4;
        POPSTACKTRACE( atplotlib_e_3e_3d_2a_a4e3502a( X1, 
                                                      CONS( atplotlib_ead_2ddata_11b2f261( X3 ), 
                                                            X2 ) ) );
}

DEFTSCP( atplotlib_dx_2dlabel_5047f1d9_v );
DEFCSTRING( t13823, "MPLOT-X-LABEL" );

TSCP  atplotlib_dx_2dlabel_5047f1d9( l12956 )
        TSCP  l12956;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13823 );
        X2 = CONS( c12715, EMPTYLIST );
        X2 = CONS( l12956, X2 );
        X1 = b_2dstuff_a_2dappend_2ada51f7( CONS( c12957, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_dy_2dlabel_473ce59a_v );
DEFCSTRING( t13825, "MPLOT-Y-LABEL" );

TSCP  atplotlib_dy_2dlabel_473ce59a( l12959 )
        TSCP  l12959;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13825 );
        X2 = CONS( c12715, EMPTYLIST );
        X2 = CONS( l12959, X2 );
        X1 = b_2dstuff_a_2dappend_2ada51f7( CONS( c12960, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_dz_2dlabel_7eb1d95f_v );
DEFCSTRING( t13827, "MPLOT-Z-LABEL" );

TSCP  atplotlib_dz_2dlabel_7eb1d95f( l12962 )
        TSCP  l12962;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13827 );
        X2 = CONS( c12715, EMPTYLIST );
        X2 = CONS( l12962, X2 );
        X1 = b_2dstuff_a_2dappend_2ada51f7( CONS( c12963, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_dhistogram_dba4cba8_v );
DEFCSTRING( t13829, "MPLOT-DATA-HISTOGRAM" );

TSCP  atplotlib_dhistogram_dba4cba8( a12965, b12966, o12967 )
        TSCP  a12965, b12966, o12967;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13829 );
        X2 = CONS( c12776, EMPTYLIST );
        X2 = CONS( o12967, X2 );
        X2 = CONS( b12966, X2 );
        X2 = CONS( c12969, X2 );
        X2 = CONS( a12965, X2 );
        X1 = atplotlib_s_2dappend_6433b438( CONS( c12968, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_dhistogram_3309e6ea_v );
DEFCSTRING( t13831, "MPLOT-HISTOGRAM" );

TSCP  atplotlib_dhistogram_3309e6ea( v12971, b12972, o12973 )
        TSCP  v12971, b12972, o12973;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13831 );
        X3 = sc_cons( v12971, EMPTYLIST );
        X2 = X3;
        X1 = atplotlib_ead_2ddata_11b2f261( X2 );
        X4 = CONS( o12973, EMPTYLIST );
        X3 = scrt1_cons_2a( _TSCP( 0 ), CONS( b12972, X4 ) );
        X2 = sc_apply_2dtwo( atplotlib_dhistogram_dba4cba8_v, X3 );
        POPSTACKTRACE( atplotlib_d_3e_3e_3d_42f4407e( X1, X2 ) );
}

DEFTSCP( atplotlib_dhistogram_8b6064aa_v );
DEFCSTRING( t13834, "MPLOT-SHOW-HISTOGRAM" );

TSCP  atplotlib_dhistogram_8b6064aa( v12977, b12978, o12979 )
        TSCP  v12977, b12978, o12979;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13834 );
        X3 = CONS( o12979, EMPTYLIST );
        X2 = scrt1_cons_2a( v12977, CONS( b12978, X3 ) );
        X1 = sc_apply_2dtwo( atplotlib_dhistogram_3309e6ea_v, X2 );
        POPSTACKTRACE( atplotlib_2donscreen_798d3b4b( X1 ) );
}

DEFTSCP( atplotlib__2dscatter_24da2811_v );
DEFCSTRING( t13836, "MPLOT-DATA-SCATTER" );

TSCP  atplotlib__2dscatter_24da2811( a12981, b12982, o12983 )
        TSCP  a12981, b12982, o12983;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13836 );
        X2 = CONS( o12983, EMPTYLIST );
        X2 = CONS( c12984, X2 );
        X1 = scrt1_cons_2a( a12981, CONS( b12982, X2 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_ata_2dplot_e3e52923_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib__2dscatter_786264c_v );
DEFCSTRING( t13838, "MPLOT-SCATTER" );

TSCP  atplotlib__2dscatter_786264c( x12986, y12987, o12988 )
        TSCP  x12986, y12987, o12988;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13838 );
        X2 = CONS( o12988, EMPTYLIST );
        X2 = CONS( c12984, X2 );
        X1 = scrt1_cons_2a( x12986, CONS( y12987, X2 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_lot_2dplot_87d143e8_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib__2dscatter_9bf9f32f_v );
DEFCSTRING( t13840, "MPLOT-SHOW-SCATTER" );

TSCP  atplotlib__2dscatter_9bf9f32f( x12990, y12991, o12992 )
        TSCP  x12990, y12991, o12992;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13840 );
        X2 = CONS( o12992, EMPTYLIST );
        X2 = CONS( c12984, X2 );
        X1 = scrt1_cons_2a( x12990, CONS( y12991, X2 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_how_2dplot_c7c37a1_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib_ne_2dstyle_64e9421_v );
DEFCSTRING( t13842, "MPLOT-LINE-STYLE" );

TSCP  atplotlib_ne_2dstyle_64e9421( x12994, 
                                    y12995, s12996, o12997 )
        TSCP  x12994, y12995, s12996, o12997;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13842 );
        X2 = CONS( o12997, EMPTYLIST );
        X2 = CONS( s12996, X2 );
        X1 = scrt1_cons_2a( x12994, CONS( y12995, X2 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_lot_2dplot_87d143e8_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib_ata_2dline_8c4a125c_v );
DEFCSTRING( t13844, "MPLOT-DATA-LINE" );

TSCP  atplotlib_ata_2dline_8c4a125c( a12999, b13000, o13001 )
        TSCP  a12999, b13000, o13001;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13844 );
        X2 = CONS( o13001, EMPTYLIST );
        X2 = CONS( c12951, X2 );
        X1 = scrt1_cons_2a( a12999, CONS( b13000, X2 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_ata_2dplot_e3e52923_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib_lot_2dline_e87e7897_v );
DEFCSTRING( t13846, "MPLOT-LINE" );

TSCP  atplotlib_lot_2dline_e87e7897( x13003, y13004, o13005 )
        TSCP  x13003, y13004, o13005;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13846 );
        X2 = CONS( o13005, EMPTYLIST );
        X2 = CONS( c12951, X2 );
        X1 = scrt1_cons_2a( x13003, CONS( y13004, X2 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_lot_2dplot_87d143e8_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib_2dline_2df_74d99a03_v );
DEFCSTRING( t13848, "MPLOT-LINE-F" );

TSCP  atplotlib_2dline_2df_74d99a03( f13007, l13008, o13009 )
        TSCP  f13007, l13008, o13009;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13848 );
        X2 = CONS( o13009, EMPTYLIST );
        X2 = CONS( c12951, X2 );
        X3 = l13008;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L13851:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13852;
        X6 = X4;
        goto L13859;
L13852:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L13855;
        scrt1__24__car_2derror( X3 );
L13855:
        X10 = PAIR_CAR( X3 );
        X9 = f13007;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( X10, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L13858;
        X8 = PAIR_CDR( X3 );
        X5 = X7;
        X4 = X7;
        X3 = X8;
        GOBACK( L13851 );
L13858:
        X8 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L13863;
        scdebug_error( c12628, 
                       c12629, CONS( X5, EMPTYLIST ) );
L13863:
        X5 = SETGEN( PAIR_CDR( X5 ), X7 );
        X3 = X8;
        GOBACK( L13851 );
L13859:
        X1 = scrt1_cons_2a( l13008, CONS( X6, X2 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_lot_2dplot_87d143e8_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib_how_2dline_63d30cde_v );
DEFCSTRING( t13865, "MPLOT-SHOW-LINE" );

TSCP  atplotlib_how_2dline_63d30cde( x13053, y13054, o13055 )
        TSCP  x13053, y13054, o13055;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13865 );
        X2 = CONS( o13055, EMPTYLIST );
        X2 = CONS( c12951, X2 );
        X1 = scrt1_cons_2a( x13053, CONS( y13054, X2 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_how_2dplot_c7c37a1_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib__2dcontour_cf7bb3e8_v );
DEFCSTRING( t13867, "MPLOT-CONTOUR" );
EXTERNTSCP( atplotlib_projection_52547955_v );
EXTERNTSCPP( atplotlib__2dsurface_90248d55, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( atplotlib__2dsurface_90248d55_v );
EXTERNTSCPP( atplotlib__2dcontour_9f62c8eb, 
             XAL6( TSCP, TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( atplotlib__2dcontour_9f62c8eb_v );
EXTERNTSCPP( atplotlib_d_2dlabels_4fc61fbc, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( atplotlib_d_2dlabels_4fc61fbc_v );

TSCP  atplotlib__2dcontour_cf7bb3e8( x13057, 
                                     y13058, z13059, o13060 )
        TSCP  x13057, y13058, z13059, o13060;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13867 );
        X5 = sc_cons( z13059, EMPTYLIST );
        X4 = sc_cons( y13058, X5 );
        X3 = sc_cons( x13057, X4 );
        X2 = X3;
        X1 = atplotlib_ead_2ddata_11b2f261( X2 );
        X7 = atplotlib__2dsurface_90248d55( _TSCP( 0 ), 
                                            _TSCP( 4 ), _TSCP( 8 ) );
        X11 = idealib_2dmatplotlib_maximuml( x13057 );
        X12 = idealib_2dmatplotlib_maximuml( y13058 );
        X13 = idealib_2dmatplotlib_minimuml( z13059 );
        X10 = atplotlib__2dcontour_9f62c8eb( _TSCP( 0 ), 
                                             _TSCP( 4 ), 
                                             _TSCP( 8 ), 
                                             X11, X12, X13 );
        X13 = atplotlib_d_2dlabels_4fc61fbc( x13057, 
                                             y13058, z13059 );
        X14 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X12 = scrt1_append_2dtwo( X13, X14 );
        X11 = scrt1_cons_2a( X12, EMPTYLIST );
        X9 = scrt1_append_2dtwo( X10, X11 );
        X8 = scrt1_cons_2a( X9, EMPTYLIST );
        X6 = scrt1_append_2dtwo( X7, X8 );
        X5 = scrt1_cons_2a( X6, EMPTYLIST );
        X4 = scrt1_append_2dtwo( atplotlib_projection_52547955_v, X5 );
        X3 = scrt1_cons_2a( X4, EMPTYLIST );
        X2 = atplotlib_t_2dreturn_873c0e7( X3 );
        POPSTACKTRACE( atplotlib_d_3e_3e_3d_42f4407e( X1, X2 ) );
}

DEFTSCP( atplotlib_rojections_41a5d019_v );
DEFCSTRING( t13870, "MPLOT-PROJECTIONS" );

TSCP  atplotlib_rojections_41a5d019( x13064, 
                                     y13065, z13066, o13067 )
        TSCP  x13064, y13065, z13066, o13067;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13870 );
        X5 = sc_cons( z13066, EMPTYLIST );
        X4 = sc_cons( y13065, X5 );
        X3 = sc_cons( x13064, X4 );
        X2 = X3;
        X1 = atplotlib_ead_2ddata_11b2f261( X2 );
        X8 = idealib_2dmatplotlib_maximuml( x13064 );
        X9 = idealib_2dmatplotlib_maximuml( y13065 );
        X10 = idealib_2dmatplotlib_minimuml( z13066 );
        X7 = atplotlib__2dcontour_9f62c8eb( _TSCP( 0 ), 
                                            _TSCP( 4 ), 
                                            _TSCP( 8 ), 
                                            X8, X9, X10 );
        X10 = atplotlib_d_2dlabels_4fc61fbc( x13064, 
                                             y13065, z13066 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = scrt1_append_2dtwo( X10, X11 );
        X8 = scrt1_cons_2a( X9, EMPTYLIST );
        X6 = scrt1_append_2dtwo( X7, X8 );
        X5 = scrt1_cons_2a( X6, EMPTYLIST );
        X4 = scrt1_append_2dtwo( atplotlib_projection_52547955_v, X5 );
        X3 = scrt1_cons_2a( X4, EMPTYLIST );
        X2 = atplotlib_t_2dreturn_873c0e7( X3 );
        POPSTACKTRACE( atplotlib_d_3e_3e_3d_42f4407e( X1, X2 ) );
}

DEFTSCP( atplotlib_ontour_2df_2021246_v );
DEFCSTRING( t13873, "MPLOT-CONTOUR-F" );
EXTERNTSCPP( qobischeme_map_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_v );
EXTERNTSCPP( toollib_2dmisc_map_2dlinear, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_map_2dlinear_v );
EXTERNTSCPP( qobischeme_identity, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_identity_v );

TSCP  idealib_2dmatplotlib_l13078( __13079, c13875 )
        TSCP  __13079, c13875;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13078 [inside MPLOT-CONTOUR-F\
]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c13875, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c13875, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13875, 2 );
        X4 = toollib_2dmisc_map_2dlinear( qobischeme_identity_v, 
                                          DISPLAY( 1 ), 
                                          DISPLAY( 2 ), 
                                          DISPLAY( 5 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 1 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCPP( qobischeme__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2b_2dtwo_v );

TSCP  idealib_2dmatplotlib_l13092( y13093, c13879 )
        TSCP  y13093, c13879;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13092 [inside MPLOT-CONTOUR-F\
]" );
        X1 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c13879, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13879, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 6 ), 
                                          y13093, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 6 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  idealib_2dmatplotlib_l13090( x13091, c13877 )
        TSCP  x13091, c13877;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13090 [inside MPLOT-CONTOUR-F\
]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c13877, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c13877, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c13877, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13877, 3 );
        DISPLAY( 6 ) = x13091;
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13092, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 0 ) ) );
        X5 = toollib_2dmisc_map_2dlinear( X6, 
                                          DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          DISPLAY( 5 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 0 ) = X4;
        SDVAL = X5;
        DISPLAY( 6 ) = SD6;
        POPSTACKTRACE( SDVAL );
}

TSCP  idealib_2dmatplotlib_l13085( __13086, c13883 )
        TSCP  __13086, c13883;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13085 [inside MPLOT-CONTOUR-F\
]" );
        X1 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c13883, 0 );
        X2 = DISPLAY( 6 );
        DISPLAY( 6 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  idealib_2dmatplotlib_l13083( a13084, c13881 )
        TSCP  a13084, c13881;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13083 [inside MPLOT-CONTOUR-F\
]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c13881, 0 );
        DISPLAY( 6 ) = a13084;
        X3 = MAKEPROCEDURE( 0, 
                            1, 
                            idealib_2dmatplotlib_l13085, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 6 ) ) );
        X4 = qobischeme__2b_2dtwo( DISPLAY( 5 ), _TSCP( 4 ) );
        X2 = qobischeme_map_2dn( X3, X4 );
        DISPLAY( 5 ) = X1;
        SDVAL = X2;
        DISPLAY( 6 ) = SD6;
        POPSTACKTRACE( SDVAL );
}

TSCP  atplotlib_ontour_2df_2021246( f13071, 
                                    x13072, 
                                    x13073, 
                                    y13074, 
                                    y13075, s13076, o13077 )
        TSCP  f13071, 
              x13072, 
              x13073, y13074, y13075, s13076, o13077;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13873 );
        DISPLAY( 0 ) = f13071;
        DISPLAY( 1 ) = x13072;
        DISPLAY( 2 ) = x13073;
        DISPLAY( 3 ) = y13074;
        DISPLAY( 4 ) = y13075;
        DISPLAY( 5 ) = s13076;
        X3 = MAKEPROCEDURE( 0, 
                            1, 
                            idealib_2dmatplotlib_l13078, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ) ) );
        X4 = qobischeme__2b_2dtwo( DISPLAY( 5 ), _TSCP( 4 ) );
        X2 = qobischeme_map_2dn( X3, X4 );
        X3 = CONS( o13077, EMPTYLIST );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13090, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X3 = CONS( toollib_2dmisc_map_2dlinear( X4, 
                                                DISPLAY( 1 ), 
                                                DISPLAY( 2 ), 
                                                DISPLAY( 5 ) ), 
                   X3 );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13083, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 5 ) ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( toollib_2dmisc_map_2dlinear( X4, 
                                                               DISPLAY( 3 ), 
                                                               DISPLAY( 4 ), 
                                                               DISPLAY( 5 ) ), 
                                  X3 ) );
        SDVAL = sc_apply_2dtwo( atplotlib__2dcontour_cf7bb3e8_v, X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_ctions_2df_63f2504b_v );
DEFCSTRING( t13885, "MPLOT-PROJECTIONS-F" );

TSCP  idealib_2dmatplotlib_l13102( __13103, c13887 )
        TSCP  __13103, c13887;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13102 [inside MPLOT-PROJECTIO\
NS-F]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c13887, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c13887, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13887, 2 );
        X4 = toollib_2dmisc_map_2dlinear( qobischeme_identity_v, 
                                          DISPLAY( 1 ), 
                                          DISPLAY( 2 ), 
                                          DISPLAY( 5 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 1 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  idealib_2dmatplotlib_l13116( y13117, c13891 )
        TSCP  y13117, c13891;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13116 [inside MPLOT-PROJECTIO\
NS-F]" );
        X1 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c13891, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13891, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 6 ), 
                                          y13117, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 6 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  idealib_2dmatplotlib_l13114( x13115, c13889 )
        TSCP  x13115, c13889;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13114 [inside MPLOT-PROJECTIO\
NS-F]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c13889, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c13889, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c13889, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13889, 3 );
        DISPLAY( 6 ) = x13115;
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13116, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 0 ) ) );
        X5 = toollib_2dmisc_map_2dlinear( X6, 
                                          DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          DISPLAY( 5 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 0 ) = X4;
        SDVAL = X5;
        DISPLAY( 6 ) = SD6;
        POPSTACKTRACE( SDVAL );
}

TSCP  idealib_2dmatplotlib_l13109( __13110, c13895 )
        TSCP  __13110, c13895;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13109 [inside MPLOT-PROJECTIO\
NS-F]" );
        X1 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c13895, 0 );
        X2 = DISPLAY( 6 );
        DISPLAY( 6 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  idealib_2dmatplotlib_l13107( a13108, c13893 )
        TSCP  a13108, c13893;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13107 [inside MPLOT-PROJECTIO\
NS-F]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c13893, 0 );
        DISPLAY( 6 ) = a13108;
        X3 = MAKEPROCEDURE( 0, 
                            1, 
                            idealib_2dmatplotlib_l13109, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 6 ) ) );
        X4 = qobischeme__2b_2dtwo( DISPLAY( 5 ), _TSCP( 4 ) );
        X2 = qobischeme_map_2dn( X3, X4 );
        DISPLAY( 5 ) = X1;
        SDVAL = X2;
        DISPLAY( 6 ) = SD6;
        POPSTACKTRACE( SDVAL );
}

TSCP  atplotlib_ctions_2df_63f2504b( f13095, 
                                     x13096, 
                                     x13097, 
                                     y13098, 
                                     y13099, s13100, o13101 )
        TSCP  f13095, 
              x13096, 
              x13097, y13098, y13099, s13100, o13101;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13885 );
        DISPLAY( 0 ) = f13095;
        DISPLAY( 1 ) = x13096;
        DISPLAY( 2 ) = x13097;
        DISPLAY( 3 ) = y13098;
        DISPLAY( 4 ) = y13099;
        DISPLAY( 5 ) = s13100;
        X3 = MAKEPROCEDURE( 0, 
                            1, 
                            idealib_2dmatplotlib_l13102, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ) ) );
        X4 = qobischeme__2b_2dtwo( DISPLAY( 5 ), _TSCP( 4 ) );
        X2 = qobischeme_map_2dn( X3, X4 );
        X3 = CONS( o13101, EMPTYLIST );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13114, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X3 = CONS( toollib_2dmisc_map_2dlinear( X4, 
                                                DISPLAY( 1 ), 
                                                DISPLAY( 2 ), 
                                                DISPLAY( 5 ) ), 
                   X3 );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13107, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 5 ) ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( toollib_2dmisc_map_2dlinear( X4, 
                                                               DISPLAY( 3 ), 
                                                               DISPLAY( 4 ), 
                                                               DISPLAY( 5 ) ), 
                                  X3 ) );
        SDVAL = sc_apply_2dtwo( atplotlib_rojections_41a5d019_v, X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_projection_52547955_v );
DEFCSTRING( t13897, "MPLOT-PY-AXIS-3D-PROJECTION" );
DEFTSCP( atplotlib_dwireframe_14ae0565_v );
DEFCSTRING( t13898, "MPLOT-PY-WIREFRAME" );

TSCP  atplotlib_dwireframe_14ae0565( a13120, b13121, c13122 )
        TSCP  a13120, b13121, c13122;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13898 );
        X2 = CONS( c13125, EMPTYLIST );
        X2 = CONS( c13122, X2 );
        X2 = CONS( c13124, X2 );
        X2 = CONS( b13121, X2 );
        X2 = CONS( c13124, X2 );
        X2 = CONS( a13120, X2 );
        X1 = b_2dstuff_a_2dappend_2ada51f7( CONS( c13123, X2 ) );
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
}

DEFTSCP( atplotlib__2dsurface_90248d55_v );
DEFCSTRING( t13900, "MPLOT-PY-SURFACE" );

TSCP  atplotlib__2dsurface_90248d55( a13127, b13128, c13129 )
        TSCP  a13127, b13128, c13129;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13900 );
        X2 = CONS( c13131, EMPTYLIST );
        X2 = CONS( c13129, X2 );
        X2 = CONS( c13124, X2 );
        X2 = CONS( b13128, X2 );
        X2 = CONS( c13124, X2 );
        X2 = CONS( a13127, X2 );
        X1 = b_2dstuff_a_2dappend_2ada51f7( CONS( c13130, X2 ) );
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
}

DEFTSCP( atplotlib__2dcontour_9f62c8eb_v );
DEFCSTRING( t13902, "MPLOT-PY-CONTOUR" );

TSCP  atplotlib__2dcontour_9f62c8eb( a13133, 
                                     b13134, 
                                     c13135, 
                                     m13136, m13137, m13138 )
        TSCP  a13133, 
              b13134, c13135, m13136, m13137, m13138;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13902 );
        X2 = CONS( c12776, EMPTYLIST );
        X2 = CONS( m13138, X2 );
        X2 = CONS( c13141, X2 );
        X2 = CONS( c13135, X2 );
        X2 = CONS( c13140, X2 );
        X2 = CONS( b13134, X2 );
        X2 = CONS( c13140, X2 );
        X2 = CONS( a13133, X2 );
        X1 = b_2dstuff_a_2dappend_2ada51f7( CONS( c13139, X2 ) );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( c12776, EMPTYLIST );
        X3 = CONS( m13137, X3 );
        X3 = CONS( c13143, X3 );
        X3 = CONS( c13135, X3 );
        X3 = CONS( c13140, X3 );
        X3 = CONS( b13134, X3 );
        X3 = CONS( c13140, X3 );
        X3 = CONS( a13133, X3 );
        X2 = CONS( b_2dstuff_a_2dappend_2ada51f7( CONS( c13139, X3 ) ), 
                   X2 );
        X3 = CONS( c12776, EMPTYLIST );
        X3 = CONS( m13136, X3 );
        X3 = CONS( c13142, X3 );
        X3 = CONS( c13135, X3 );
        X3 = CONS( c13140, X3 );
        X3 = CONS( b13134, X3 );
        X3 = CONS( c13140, X3 );
        X3 = CONS( a13133, X3 );
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( b_2dstuff_a_2dappend_2ada51f7( CONS( c13139, 
                                                                                 X3 ) ), 
                                            X2 ) ) );
}

DEFTSCP( atplotlib_d_2dlabels_4fc61fbc_v );
DEFCSTRING( t13904, "MPLOT-PY-AXIS-3D-LABELS" );

TSCP  atplotlib_d_2dlabels_4fc61fbc( x13145, y13146, z13147 )
        TSCP  x13145, y13146, z13147;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13904 );
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( c12776, EMPTYLIST );
        X2 = CONS( idealib_2dmatplotlib_maximuml( z13147 ), X2 );
        X2 = CONS( c13150, X2 );
        X2 = CONS( idealib_2dmatplotlib_minimuml( z13147 ), X2 );
        X1 = CONS( b_2dstuff_a_2dappend_2ada51f7( CONS( c13154, X2 ) ), 
                   X1 );
        X1 = CONS( c13153, X1 );
        X2 = CONS( c12776, EMPTYLIST );
        X2 = CONS( idealib_2dmatplotlib_maximuml( y13146 ), X2 );
        X2 = CONS( c13150, X2 );
        X2 = CONS( idealib_2dmatplotlib_minimuml( y13146 ), X2 );
        X1 = CONS( b_2dstuff_a_2dappend_2ada51f7( CONS( c13152, X2 ) ), 
                   X1 );
        X1 = CONS( c13151, X1 );
        X2 = CONS( c12776, EMPTYLIST );
        X2 = CONS( idealib_2dmatplotlib_maximuml( x13145 ), X2 );
        X2 = CONS( c13150, X2 );
        X2 = CONS( idealib_2dmatplotlib_minimuml( x13145 ), X2 );
        POPSTACKTRACE( scrt1_cons_2a( c13148, 
                                      CONS( b_2dstuff_a_2dappend_2ada51f7( CONS( c13149, 
                                                                                 X2 ) ), 
                                            X1 ) ) );
}

DEFTSCP( atplotlib_data_2dbar_bb3cdb3_v );
DEFCSTRING( t13906, "MPLOT-SUBPLOT-DATA-BAR" );

TSCP  atplotlib_data_2dbar_bb3cdb3( a13156, 
                                    w13157, o13158, o13159 )
        TSCP  a13156, w13157, o13158, o13159;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13906 );
        X2 = CONS( c12776, EMPTYLIST );
        X2 = CONS( o13159, X2 );
        X2 = CONS( w13157, X2 );
        X2 = CONS( c13163, X2 );
        X2 = CONS( a13156, X2 );
        X2 = CONS( c13162, X2 );
        X2 = CONS( o13158, X2 );
        X2 = CONS( c13161, X2 );
        X2 = CONS( a13156, X2 );
        X1 = atplotlib_s_2dappend_6433b438( CONS( c13160, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib__2dsubplot_7df8d8c7_v );
DEFCSTRING( t13908, "MPLOT-ADD-SUBPLOT" );

TSCP  atplotlib__2dsubplot_7df8d8c7( r13165, 
                                     c13166, f13167, o13168 )
        TSCP  r13165, c13166, f13167, o13168;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13908 );
        X2 = CONS( c12776, EMPTYLIST );
        X2 = CONS( o13168, X2 );
        X2 = CONS( f13167, X2 );
        X2 = CONS( c13166, X2 );
        X2 = CONS( r13165, X2 );
        X1 = atplotlib_s_2dappend_6433b438( CONS( c13169, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib__2dsubplot_1b72953a_v );
DEFCSTRING( t13910, "MPLOT-SUBPLOT" );

TSCP  atplotlib__2dsubplot_1b72953a( r13171, 
                                     c13172, f13173, o13174 )
        TSCP  r13171, c13172, f13173, o13174;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13910 );
        X2 = CONS( c12776, EMPTYLIST );
        X2 = CONS( o13174, X2 );
        X2 = CONS( f13173, X2 );
        X2 = CONS( c12885, X2 );
        X2 = CONS( c13172, X2 );
        X2 = CONS( c12885, X2 );
        X2 = CONS( r13171, X2 );
        X1 = atplotlib_s_2dappend_6433b438( CONS( c13175, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_lt_2dwidth_743852fd_v );
DEFCSTRING( t13912, "MPLOT-BAR-DEFAULT-WIDTH" );
EXTERNTSCPP( qobischeme__2f_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2f_2dtwo_v );

TSCP  atplotlib_lt_2dwidth_743852fd( n13177 )
        TSCP  n13177;
{
        TSCP  X1;

        PUSHSTACKTRACE( t13912 );
        X1 = qobischeme__2b_2dtwo( n13177, _TSCP( 4 ) );
        POPSTACKTRACE( qobischeme__2f_2dtwo( _TSCP( 4 ), X1 ) );
}

DEFTSCP( atplotlib_2dlabelled_b0760d19_v );
DEFCSTRING( t13914, "MPLOT-SUBPLOT-BARS-LABELLED" );
EXTERNTSCPP( atplotlib_lot_2dbars_b91055c5, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( atplotlib_lot_2dbars_b91055c5_v );
EXTERNTSCPP( atplotlib_k_2dlabels_6444b7b3, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( atplotlib_k_2dlabels_6444b7b3_v );
EXTERNTSCPP( atplotlib__2dspacing_43aae498, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( atplotlib__2dspacing_43aae498_v );
EXTERNTSCPP( qobischeme_first, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_first_v );
EXTERNTSCPP( qobischeme__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2d_2dtwo_v );

TSCP  atplotlib_2dlabelled_b0760d19( v13185, l13186, o13187 )
        TSCP  v13185, l13186, o13187;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13914 );
        X2 = scrt1_cons_2a( v13185, 
                            CONS( o13187, EMPTYLIST ) );
        X1 = sc_apply_2dtwo( atplotlib_lot_2dbars_b91055c5_v, X2 );
        X2 = CONS( atplotlib_k_2dlabels_6444b7b3( l13186, EMPTYLIST ), 
                   EMPTYLIST );
        X4 = qobischeme_first( v13185 );
        X3 = scrt1_length( X4 );
        X7 = scrt1_length( v13185 );
        X6 = atplotlib_lt_2dwidth_743852fd( X7 );
        X5 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X4 = qobischeme__2f_2dtwo( X5, _TSCP( 8 ) );
        POPSTACKTRACE( atplotlib_e_3e_3d_2a_a4e3502a( X1, 
                                                      CONS( atplotlib__2dspacing_43aae498( X3, 
                                                                                           X4, 
                                                                                           EMPTYLIST ), 
                                                            X2 ) ) );
}

DEFTSCP( atplotlib_lot_2dbars_b91055c5_v );
DEFCSTRING( t13916, "MPLOT-SUBPLOT-BARS" );
EXTERNTSCPP( qobischeme_map_2dindexed, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dindexed_v );
EXTERNTSCPP( scrt1_list_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_list_2dref_v );
EXTERNTSCPP( qobischeme__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2a_2dtwo_v );

TSCP  idealib_2dmatplotlib_l13199( l13200, i13201, c13919 )
        TSCP  l13200, i13201, c13919;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13199 [inside MPLOT-SUBPLOT-B\
ARS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13919, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13919, 1 );
        if  ( NEQ( _S2CUINT( DISPLAY( 0 ) ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13921;
        X6 = EMPTYLIST;
        goto L13922;
L13921:
        X6 = scrt1_list_2dref( DISPLAY( 0 ), i13201 );
L13922:
        X5 = CONS( X6, EMPTYLIST );
        X5 = CONS( qobischeme__2a_2dtwo( DISPLAY( 1 ), i13201 ), 
                   X5 );
        X4 = scrt1_cons_2a( i13201, 
                            CONS( DISPLAY( 1 ), X5 ) );
        X3 = sc_apply_2dtwo( atplotlib_data_2dbar_bb3cdb3_v, X4 );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  atplotlib_lot_2dbars_b91055c5( v13195, o13196 )
        TSCP  v13195, o13196;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13916 );
        DISPLAY( 0 ) = o13196;
        X2 = atplotlib_ead_2ddata_11b2f261( v13195 );
        X4 = scrt1_length( v13195 );
        DISPLAY( 1 ) = atplotlib_lt_2dwidth_743852fd( X4 );
        X4 = MAKEPROCEDURE( 2, 
                            0, 
                            idealib_2dmatplotlib_l13199, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        X3 = CONS( qobischeme_map_2dindexed( X4, v13195 ), 
                   EMPTYLIST );
        X1 = scrt1_cons_2a( X2, 
                            CONS( atplotlib__2dsubplot_7df8d8c7( _TSCP( 4 ), 
                                                                 _TSCP( 4 ), 
                                                                 _TSCP( 4 ), 
                                                                 EMPTYLIST ), 
                                  X3 ) );
        SDVAL = sc_apply_2dtwo( atplotlib_e_3e_3d_2a_a4e3502a_v, X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_dd_2dtitle_66f385ba_v );
DEFCSTRING( t13923, "MPLOT-ADD-TITLE" );

TSCP  atplotlib_dd_2dtitle_66f385ba( s13211, o13212 )
        TSCP  s13211, o13212;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13923 );
        X2 = CONS( c12715, EMPTYLIST );
        X2 = CONS( o13212, X2 );
        X2 = CONS( s13211, X2 );
        X1 = atplotlib_s_2dappend_6433b438( CONS( c13213, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib__2dspacing_43aae498_v );
DEFCSTRING( t13925, "MPLOT-AXIS-XTICK-SPACING" );

TSCP  atplotlib__2dspacing_43aae498( n13215, w13216, o13217 )
        TSCP  n13215, w13216, o13217;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13925 );
        X2 = CONS( c12776, EMPTYLIST );
        X2 = CONS( o13217, X2 );
        X2 = CONS( w13216, X2 );
        X2 = CONS( c13219, X2 );
        X2 = CONS( n13215, X2 );
        X1 = atplotlib_s_2dappend_6433b438( CONS( c13218, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_ing_2dtail_fc64d129_v );
DEFCSTRING( t13927, "STRING-TAIL" );
EXTERNTSCPP( scrt3_substring, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt3_substring_v );

TSCP  atplotlib_ing_2dtail_fc64d129( s13221 )
        TSCP  s13221;
{
        TSCP  X1;

        PUSHSTACKTRACE( t13927 );
        if  ( AND( EQ( TSCPTAG( s13221 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13221 ), STRINGTAG ) )
            )  goto L13930;
        scdebug_error( c13226, 
                       c13227, CONS( s13221, EMPTYLIST ) );
L13930:
        X1 = C_FIXED( STRING_LENGTH( s13221 ) );
        POPSTACKTRACE( scrt3_substring( s13221, _TSCP( 4 ), X1 ) );
}

DEFTSCP( atplotlib_k_2dlabels_6444b7b3_v );
DEFCSTRING( t13932, "MPLOT-AXIS-XTICK-LABELS" );

TSCP  atplotlib_k_2dlabels_6444b7b3( l13229, o13230 )
        TSCP  l13229, o13230;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13932 );
        X2 = CONS( c13233, EMPTYLIST );
        X2 = CONS( o13230, X2 );
        X2 = CONS( c13232, X2 );
        X4 = atplotlib__2doptions_6ed9fc45( l13229 );
        X3 = atplotlib_d_3estring_5180ea49( X4 );
        X2 = CONS( atplotlib_ing_2dtail_fc64d129( X3 ), X2 );
        X1 = atplotlib_s_2dappend_6433b438( CONS( c13231, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_nterpolate_178b6365_v );
DEFCSTRING( t13934, "MPLOT-INTERPOLATE" );

TSCP  atplotlib_nterpolate_178b6365( a13235, b13236, n13237 )
        TSCP  a13235, b13236, n13237;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13934 );
        X3 = CONS( c13243, EMPTYLIST );
        X3 = CONS( b13236, X3 );
        X3 = CONS( c12774, X3 );
        X3 = CONS( a13235, X3 );
        X3 = CONS( c13242, X3 );
        X3 = CONS( n13237, X3 );
        X3 = CONS( c13241, X3 );
        X3 = CONS( a13235, X3 );
        X3 = CONS( c13240, X3 );
        X3 = CONS( a13235, X3 );
        X3 = CONS( c13239, X3 );
        X3 = CONS( b13236, X3 );
        X2 = b_2dstuff_a_2dappend_2ada51f7( CONS( c13238, X3 ) );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c12776, EMPTYLIST );
        X4 = CONS( n13237, X4 );
        X4 = CONS( c13241, X4 );
        X4 = CONS( a13235, X4 );
        X4 = CONS( c13240, X4 );
        X4 = CONS( a13235, X4 );
        X4 = CONS( c13244, X4 );
        X4 = CONS( a13235, X4 );
        X1 = scrt1_cons_2a( X2, 
                            CONS( b_2dstuff_a_2dappend_2ada51f7( CONS( c13238, 
                                                                       X4 ) ), 
                                  X3 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_terpolated_bb67f0e5_v );
DEFCSTRING( t13936, "MPLOT-PLOT-INTERPOLATED" );

TSCP  atplotlib_terpolated_bb67f0e5( x13246, 
                                     y13247, n13248, o13249 )
        TSCP  x13246, y13247, n13248, o13249;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13936 );
        X4 = sc_cons( y13247, EMPTYLIST );
        X3 = sc_cons( x13246, X4 );
        X2 = X3;
        X1 = atplotlib_ead_2ddata_11b2f261( X2 );
        X4 = CONS( o13249, EMPTYLIST );
        X4 = CONS( c12951, X4 );
        X3 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 4 ), X4 ) );
        X2 = CONS( sc_apply_2dtwo( atplotlib_ata_2dplot_e3e52923_v, X3 ), 
                   EMPTYLIST );
        POPSTACKTRACE( atplotlib_e_3e_3d_2a_a4e3502a( X1, 
                                                      CONS( atplotlib_nterpolate_178b6365( _TSCP( 0 ), 
                                                                                           _TSCP( 4 ), 
                                                                                           n13248 ), 
                                                            X2 ) ) );
}

DEFTSCP( atplotlib_are_2daxes_34632140_v );
DEFCSTRING( t13939, "MPLOT-SQUARE-AXES" );

TSCP  atplotlib_are_2daxes_34632140(  )
{
        PUSHSTACKTRACE( t13939 );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( c13253 ) );
}

DEFTSCP( atplotlib_ate_2daxes_be48606d_v );
DEFCSTRING( t13941, "MPLOT-ROTATE-AXES" );

TSCP  atplotlib_ate_2daxes_be48606d(  )
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13941 );
        X4 = sc_cons( c13259, EMPTYLIST );
        X3 = sc_cons( c13258, X4 );
        X2 = sc_cons( c13257, X3 );
        X1 = X2;
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_cal_2daxes_e80805ac_v );
DEFCSTRING( t13944, "MPLOT-VERTICAL-AXES" );

TSCP  atplotlib_cal_2daxes_e80805ac(  )
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13944 );
        X4 = sc_cons( c13263, EMPTYLIST );
        X3 = sc_cons( c13258, X4 );
        X2 = sc_cons( c13257, X3 );
        X1 = X2;
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib__2dlog_2dy_e37fce34_v );
DEFCSTRING( t13947, "MPLOT-LOG-Y" );

TSCP  atplotlib__2dlog_2dy_e37fce34(  )
{
        PUSHSTACKTRACE( t13947 );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( c13265 ) );
}

DEFTSCP( atplotlib_lot_2dxlim_70546441_v );
DEFCSTRING( t13949, "MPLOT-XLIM" );

TSCP  atplotlib_lot_2dxlim_70546441( l13267, u13268 )
        TSCP  l13267, u13268;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13949 );
        X2 = CONS( c13270, EMPTYLIST );
        X2 = CONS( u13268, X2 );
        X2 = CONS( c12885, X2 );
        X2 = CONS( l13267, X2 );
        X1 = b_2dstuff_a_2dappend_2ada51f7( CONS( c13269, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_lot_2dylim_c8e80324_v );
DEFCSTRING( t13951, "MPLOT-YLIM" );

TSCP  atplotlib_lot_2dylim_c8e80324( l13272, u13273 )
        TSCP  l13272, u13273;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13951 );
        X2 = CONS( c13270, EMPTYLIST );
        X2 = CONS( u13273, X2 );
        X2 = CONS( c12885, X2 );
        X2 = CONS( l13272, X2 );
        X1 = b_2dstuff_a_2dappend_2ada51f7( CONS( c13274, X2 ) );
        POPSTACKTRACE( atplotlib_t_2dreturn_873c0e7( X1 ) );
}

DEFTSCP( atplotlib_p_2dlinear_745db0d0_v );
DEFCSTRING( t13953, "MPLOT-MAP-LINEAR" );
EXTERNTSCPP( idealib_2dtracks_unzip, XAL1( TSCP ) );
EXTERNTSCP( idealib_2dtracks_unzip_v );

TSCP  idealib_2dmatplotlib_l13280( x13281, c13955 )
        TSCP  x13281, c13955;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13280 [inside MPLOT-MAP-LINEA\
R]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13955, 0 );
        X6 = DISPLAY( 0 );
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( x13281, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( x13281, X4 );
        X2 = X3;
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  atplotlib_p_2dlinear_745db0d0( f13276, 
                                     s13277, e13278, n13279 )
        TSCP  f13276, s13277, e13278, n13279;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13953 );
        DISPLAY( 0 ) = f13276;
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13280, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X2 = toollib_2dmisc_map_2dlinear( X3, 
                                          s13277, e13278, n13279 );
        X1 = idealib_2dtracks_unzip( X2 );
        SDVAL = sc_apply_2dtwo( atplotlib_lot_2dline_e87e7897_v, X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib_ot_2dline1_3f5d78a5_v );
DEFCSTRING( t13958, "MPLOT-LINE1" );
EXTERNTSCPP( qobischeme_enumerate, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_enumerate_v );

TSCP  atplotlib_ot_2dline1_3f5d78a5( y13285, o13286 )
        TSCP  y13285, o13286;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13958 );
        X3 = scrt1_length( y13285 );
        X2 = qobischeme_enumerate( X3 );
        X3 = CONS( o13286, EMPTYLIST );
        X1 = scrt1_cons_2a( X2, CONS( y13285, X3 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_lot_2dline_e87e7897_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib_dbandwidth_96bcb19f_v );
DEFCSTRING( t13960, "MPLOT-DENSITY-BANDWIDTH" );
EXTERNTSCPP( qobischeme_exp, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_exp_v );
EXTERNTSCPP( qobischeme_sqr, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sqr_v );
EXTERNTSCPP( qobischeme_sqrt, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sqrt_v );
EXTERNTSCP( qobischeme_pi_v );

TSCP  idealib_2dmatplotlib_l13392( x13393, c13967 )
        TSCP  x13393, c13967;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13392 [inside MPLOT-DENSITY-B\
ANDWIDTH]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13967, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c13967, 1 );
        X4 = DISPLAY( 3 );
        X5 = x13393;
        X6 = DISPLAY( 1 );
        X11 = qobischeme__2d_2dtwo( X4, X5 );
        X10 = qobischeme_sqr( X11 );
        X11 = qobischeme__2a_2dtwo( _TSCP( 8 ), X6 );
        X9 = qobischeme__2f_2dtwo( X10, X11 );
        X8 = qobischeme__2d_2dtwo( _TSCP( 0 ), X9 );
        X7 = qobischeme_exp( X8 );
        X10 = qobischeme__2a_2dtwo( qobischeme_pi_v, X6 );
        X9 = qobischeme__2a_2dtwo( _TSCP( 8 ), X10 );
        X8 = qobischeme_sqrt( X9 );
        X3 = qobischeme__2f_2dtwo( X7, X8 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 3 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( qobischeme__2b, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__2b_v );
EXTERNTSCPP( qobischeme_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_negative_3f_v );
EXTERNTSCPP( qobischeme__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3e_3d_2dtwo_v );
EXTERNTSCPP( qobischeme_map_2dreduce, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dreduce_v );

TSCP  idealib_2dmatplotlib_f13386( x13388, c13965 )
        TSCP  x13388, c13965;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "F [inside MPLOT-DENSITY-BANDWIDTH]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c13965, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13965, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13965, 2 );
        DISPLAY( 3 ) = x13388;
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13392, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 3 ) ) );
        X7 = CONS( DISPLAY( 0 ), EMPTYLIST );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L13971;
        X5 = qobischeme_reduce( qobischeme__2b_v, X6, _TSCP( 0 ) );
        goto L13992;
L13971:
        X9 = scrt1_length( X7 );
        X8 = qobischeme__3d_2dtwo( X9, _TSCP( 4 ) );
        if  ( FALSE( X8 ) )  goto L13991;
        if  ( NOT( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X6 ), PROCEDURETAG ) ) )
            )  goto L13991;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L13981;
        scrt1__24__car_2derror( X7 );
L13981:
        X9 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L13987;
        if  ( NOT( AND( EQ( TSCPTAG( X9 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X9 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L13991;
L13987:
        X8 = qobischeme_first( X7 );
        X9 = qobischeme__2d_2dtwo( X8, _TSCP( 4 ) );
        X10 = X9;
        X11 = _TSCP( 0 );
L13996:
        if  ( FALSE( qobischeme_negative_3f( X10 ) ) )  goto L13997;
        X5 = X11;
        goto L13992;
L13997:
        X12 = qobischeme__2d_2dtwo( X10, _TSCP( 4 ) );
        X14 = X6;
        X14 = UNKNOWNCALL( X14, 1 );
        X13 = VIA( PROCEDURE_CODE( X14 ) )( X10, 
                                            PROCEDURE_CLOSURE( X14 ) );
        X11 = qobischeme__2b_2dtwo( X11, X13 );
        X10 = X12;
        GOBACK( L13996 );
L13991:
        X8 = BOOLEAN( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( X6 ), 
                               PROCEDURETAG ) ) );
        if  ( FALSE( X8 ) )  goto L14005;
        X9 = scrt1_length( X7 );
        if  ( FALSE( qobischeme__3e_3d_2dtwo( X9, _TSCP( 4 ) ) )
            )  goto L14005;
        X10 = CONS( X7, EMPTYLIST );
        X10 = CONS( X6, X10 );
        X9 = scrt1_cons_2a( qobischeme__2b_v, 
                            CONS( _TSCP( 0 ), X10 ) );
        X5 = sc_apply_2dtwo( qobischeme_map_2dreduce_v, X9 );
        goto L13992;
L14005:
        X5 = qobischeme_fuck_2dup(  );
L13992:
        X6 = qobischeme__2a_2dtwo( DISPLAY( 2 ), 
                                   DISPLAY( 1 ) );
        X4 = qobischeme__2f_2dtwo( X5, X6 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 1 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  atplotlib_dbandwidth_96bcb19f( l13288, h13289, s13290 )
        TSCP  l13288, h13289, s13290;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13960 );
        DISPLAY( 0 ) = l13288;
        DISPLAY( 1 ) = h13289;
        DISPLAY( 2 ) = scrt1_length( DISPLAY( 0 ) );
        X1 = _TSCP( 0 );
        X1 = CONS( X1, EMPTYLIST );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_f13386, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        SETGEN( PAIR_CAR( X1 ), X2 );
        if  ( NEQ( _S2CUINT( s13290 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L14006;
        X2 = toollib_2dmisc_minimum( DISPLAY( 0 ) );
        goto L14007;
L14006:
        if  ( EQ( TSCPTAG( s13290 ), PAIRTAG ) )  goto L14009;
        scrt1__24__car_2derror( s13290 );
L14009:
        X2 = PAIR_CAR( s13290 );
L14007:
        if  ( NEQ( _S2CUINT( s13290 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L14011;
        X3 = toollib_2dmisc_maximum( DISPLAY( 0 ) );
        goto L14012;
L14011:
        if  ( EQ( TSCPTAG( s13290 ), PAIRTAG ) )  goto L14014;
        scrt1__24__cdr_2derror( s13290 );
L14014:
        X4 = PAIR_CDR( s13290 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L14017;
        scrt1__24__car_2derror( X4 );
L14017:
        X3 = PAIR_CAR( X4 );
L14012:
        SDVAL = atplotlib_p_2dlinear_745db0d0( PAIR_CAR( X1 ), 
                                               X2, 
                                               X3, _TSCP( 400 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( atplotlib__2ddensity_bcd402c2_v );
DEFCSTRING( t14019, "MPLOT-DENSITY" );
EXTERNTSCPP( qobischeme_expt, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_expt_v );
EXTERNTSCPP( ib_2dmisc_2dvariance_82eaae76, XAL1( TSCP ) );
EXTERNTSCP( ib_2dmisc_2dvariance_82eaae76_v );

TSCP  atplotlib__2ddensity_bcd402c2( l13423, s13424 )
        TSCP  l13423, s13424;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14019 );
        X2 = CONS( s13424, EMPTYLIST );
        X7 = ib_2dmisc_2dvariance_82eaae76( l13423 );
        X6 = qobischeme_expt( X7, _TSCP( 20 ) );
        X5 = qobischeme__2a_2dtwo( _TSCP( 16 ), X6 );
        X7 = scrt1_length( l13423 );
        X6 = qobischeme__2a_2dtwo( _TSCP( 12 ), X7 );
        X4 = qobischeme__2f_2dtwo( X5, X6 );
        X5 = qobischeme__2f_2dtwo( _TSCP( 4 ), _TSCP( 20 ) );
        X3 = qobischeme_expt( X4, X5 );
        X1 = scrt1_cons_2a( l13423, 
                            CONS( qobischeme__2f_2dtwo( X3, 
                                                        _TSCP( 12 ) ), 
                                  X2 ) );
        POPSTACKTRACE( sc_apply_2dtwo( atplotlib_dbandwidth_96bcb19f_v, 
                                       X1 ) );
}

DEFTSCP( atplotlib_un_2dtests_35f3c30d_v );
DEFCSTRING( t14021, "MPLOT-RUN-TESTS" );
EXTERNTSCPP( qobischeme_random_2dinteger, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_random_2dinteger_v );

TSCP  idealib_2dmatplotlib_l13444( a13445, c14023 )
        TSCP  a13445, c14023;
{
        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13444 [inside MPLOT-RUN-TESTS\
]" );
        POPSTACKTRACE( qobischeme_random_2dinteger( _TSCP( 40 ) ) );
}

TSCP  idealib_2dmatplotlib_l13447( a13448, c14025 )
        TSCP  a13448, c14025;
{
        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13447 [inside MPLOT-RUN-TESTS\
]" );
        POPSTACKTRACE( qobischeme_random_2dinteger( _TSCP( 40 ) ) );
}

EXTERNTSCPP( qobischeme_sin, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sin_v );
EXTERNTSCPP( obischeme__3eradians_78a74454, XAL1( TSCP ) );
EXTERNTSCP( obischeme__3eradians_78a74454_v );
EXTERNTSCPP( qobischeme_cos, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_cos_v );

TSCP  idealib_2dmatplotlib_l13452( a13453, b13454, c14027 )
        TSCP  a13453, b13454, c14027;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dmatplotlib_l13452 [inside MPLOT-RUN-TESTS\
]" );
        X2 = obischeme__3eradians_78a74454( a13453 );
        X1 = qobischeme_sin( X2 );
        X3 = obischeme__3eradians_78a74454( b13454 );
        X2 = qobischeme_cos( X3 );
        POPSTACKTRACE( qobischeme__2b_2dtwo( X1, X2 ) );
}

TSCP  atplotlib_un_2dtests_35f3c30d(  )
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14021 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13444, EMPTYLIST );
        X2 = qobischeme_map_2dn( X3, _TSCP( 400 ) );
        X1 = atplotlib_dhistogram_3309e6ea( X2, 
                                            _TSCP( 16 ), EMPTYLIST );
        atplotlib_2donscreen_798d3b4b( X1 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dmatplotlib_l13447, EMPTYLIST );
        X2 = qobischeme_map_2dn( X3, _TSCP( 400 ) );
        X1 = atplotlib_dhistogram_3309e6ea( X2, 
                                            _TSCP( 16 ), 
                                            CONS( c13449, EMPTYLIST ) );
        atplotlib_2donscreen_798d3b4b( X1 );
        X1 = atplotlib__2dscatter_786264c( c13450, 
                                           c13451, EMPTYLIST );
        atplotlib_2donscreen_798d3b4b( X1 );
        X2 = MAKEPROCEDURE( 2, 
                            0, 
                            idealib_2dmatplotlib_l13452, EMPTYLIST );
        X1 = atplotlib_ontour_2df_2021246( X2, 
                                           _TSCP( -400 ), 
                                           _TSCP( 400 ), 
                                           _TSCP( -800 ), 
                                           _TSCP( 800 ), 
                                           _TSCP( 40 ), EMPTYLIST );
        atplotlib_2donscreen_798d3b4b( X1 );
        X6 = sc_cons( c13463, EMPTYLIST );
        X5 = sc_cons( c13464, X6 );
        X4 = sc_cons( c13463, X5 );
        X3 = X4;
        X8 = sc_cons( c13470, EMPTYLIST );
        X7 = sc_cons( c13469, X8 );
        X6 = sc_cons( c13468, X7 );
        X5 = sc_cons( c13467, X6 );
        X4 = X5;
        X2 = atplotlib_2dlabelled_b0760d19( X3, X4, EMPTYLIST );
        X3 = CONS( atplotlib_dy_2dlabel_473ce59a( c13473 ), 
                   EMPTYLIST );
        X3 = CONS( atplotlib_dx_2dlabel_5047f1d9( c13472 ), X3 );
        X1 = atplotlib_e_3e_3d_2a_a4e3502a( X2, 
                                            CONS( atplotlib_dd_2dtitle_66f385ba( c13471, 
                                                                                 EMPTYLIST ), 
                                                  X3 ) );
        atplotlib_2donscreen_798d3b4b( X1 );
        X2 = CONS( _TSCP( 44 ), EMPTYLIST );
        X1 = atplotlib_dbandwidth_96bcb19f( c13474, 
                                            c13475, 
                                            CONS( _TSCP( -24 ), X2 ) );
        POPSTACKTRACE( atplotlib_2donscreen_798d3b4b( X1 ) );
}

void idealib_2dtracks__init();
void idealib_2dstuff__init();
void scrt2__init();
void toollib_2dimage_2dprocessing__init();
void scrt6__init();
void scdebug__init();
void scrt1__init();
void scrt3__init();
void toollib_2dmisc__init();
void qobischeme__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        idealib_2dtracks__init();
        idealib_2dstuff__init();
        scrt2__init();
        toollib_2dimage_2dprocessing__init();
        scrt6__init();
        scdebug__init();
        scrt1__init();
        scrt3__init();
        toollib_2dmisc__init();
        qobischeme__init();
        MAXDISPLAY( 7 );
}

void  idealib_2dmatplotlib__init()
{
        TSCP  X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(idealib_2dmatplotlib SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t13621, 
                       ADR( idealib_2dmatplotlib_python_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      idealib_2dmatplotlib_python, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13627, 
                       ADR( idealib_2dmatplotlib_minimuml_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      idealib_2dmatplotlib_minimuml, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13645, 
                       ADR( idealib_2dmatplotlib_maximuml_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      idealib_2dmatplotlib_maximuml, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13663, 
                       ADR( atplotlib_ect_2dfile_a3ad084a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      atplotlib_ect_2dfile_a3ad084a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13667, 
                       ADR( atplotlib_2dincludes_2315b75_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      atplotlib_2dincludes_2315b75, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13669, 
                       ADR( atplotlib_ead_2ddata_abc822d2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_ead_2ddata_abc822d2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13671, 
                       ADR( atplotlib_y_2ddetach_60639398_v ), 
                       c12709 );
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        INITIALIZEVAR( t13672, 
                       ADR( atplotlib_2donscreen_bacbf9ef_v ), 
                       scrt1_cons_2a( c12710, 
                                      CONS( c12711, X1 ) ) );
        INITIALIZEVAR( t13673, 
                       ADR( atplotlib_y_2dfigure_9cb073e2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_y_2dfigure_9cb073e2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13675, 
                       ADR( atplotlib_2donscreen_798d3b4b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_2donscreen_798d3b4b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13679, 
                       ADR( atplotlib_run_2dcode_e901b9cf_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_run_2dcode_e901b9cf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13683, 
                       ADR( atplotlib_n_2dfigure_f10cf86_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      atplotlib_n_2dfigure_f10cf86, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13687, 
                       ADR( atplotlib_un_2dimlib_ea911072_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_un_2dimlib_ea911072, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13693, 
                       ADR( atplotlib_d_3e_3e_3d_42f4407e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      atplotlib_d_3e_3e_3d_42f4407e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13701, 
                       ADR( atplotlib_e_3e_3d_2a_a4e3502a_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      atplotlib_e_3e_3d_2a_a4e3502a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13703, 
                       ADR( atplotlib_t_2dreturn_873c0e7_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_t_2dreturn_873c0e7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13713, 
                       ADR( atplotlib_2donscreen_2392b12e_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      atplotlib_2donscreen_2392b12e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13715, 
                       ADR( atplotlib_lot_2dcode_4e7ffcf9_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      atplotlib_lot_2dcode_4e7ffcf9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13717, 
                       ADR( atplotlib_t_2dfigure_80ba4c92_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_t_2dfigure_80ba4c92, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13719, 
                       ADR( atplotlib_ata_2dplot_e3e52923_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib_ata_2dplot_e3e52923, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13721, 
                       ADR( atplotlib_lot_2dplot_87d143e8_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib_lot_2dplot_87d143e8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13724, 
                       ADR( atplotlib_how_2dplot_c7c37a1_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib_how_2dplot_c7c37a1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13726, 
                       ADR( atplotlib_ead_2ddata_11b2f261_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_ead_2ddata_11b2f261, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13732, 
                       ADR( atplotlib_s_2dappend_6433b438_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      atplotlib_s_2dappend_6433b438, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13761, 
                       ADR( atplotlib_keyword_3f_8a68956b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_keyword_3f_8a68956b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13766, 
                       ADR( atplotlib__2dbare_3f_230305c9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib__2dbare_3f_230305c9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13770, 
                       ADR( atplotlib_d_3estring_6394ffd1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_d_3estring_6394ffd1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13783, 
                       ADR( atplotlib_d_3estring_5180ea49_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_d_3estring_5180ea49, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13787, 
                       ADR( atplotlib_e_2doption_b2faa2e4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_e_2doption_b2faa2e4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13794, 
                       ADR( atplotlib__2doptions_6ed9fc45_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib__2doptions_6ed9fc45, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13814, 
                       ADR( atplotlib_ult_2dbare_8e3417ec_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      atplotlib_ult_2dbare_8e3417ec, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13818, 
                       ADR( atplotlib_id_2dlines_73104866_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      atplotlib_id_2dlines_73104866, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13820, 
                       ADR( atplotlib_ate_2dline_8001ca6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      atplotlib_ate_2dline_8001ca6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13823, 
                       ADR( atplotlib_dx_2dlabel_5047f1d9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_dx_2dlabel_5047f1d9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13825, 
                       ADR( atplotlib_dy_2dlabel_473ce59a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_dy_2dlabel_473ce59a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13827, 
                       ADR( atplotlib_dz_2dlabel_7eb1d95f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_dz_2dlabel_7eb1d95f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13829, 
                       ADR( atplotlib_dhistogram_dba4cba8_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_dhistogram_dba4cba8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13831, 
                       ADR( atplotlib_dhistogram_3309e6ea_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_dhistogram_3309e6ea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13834, 
                       ADR( atplotlib_dhistogram_8b6064aa_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_dhistogram_8b6064aa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13836, 
                       ADR( atplotlib__2dscatter_24da2811_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib__2dscatter_24da2811, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13838, 
                       ADR( atplotlib__2dscatter_786264c_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib__2dscatter_786264c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13840, 
                       ADR( atplotlib__2dscatter_9bf9f32f_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib__2dscatter_9bf9f32f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13842, 
                       ADR( atplotlib_ne_2dstyle_64e9421_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib_ne_2dstyle_64e9421, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13844, 
                       ADR( atplotlib_ata_2dline_8c4a125c_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_ata_2dline_8c4a125c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13846, 
                       ADR( atplotlib_lot_2dline_e87e7897_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_lot_2dline_e87e7897, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13848, 
                       ADR( atplotlib_2dline_2df_74d99a03_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_2dline_2df_74d99a03, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13865, 
                       ADR( atplotlib_how_2dline_63d30cde_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_how_2dline_63d30cde, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13867, 
                       ADR( atplotlib__2dcontour_cf7bb3e8_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib__2dcontour_cf7bb3e8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13870, 
                       ADR( atplotlib_rojections_41a5d019_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib_rojections_41a5d019, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13873, 
                       ADR( atplotlib_ontour_2df_2021246_v ), 
                       MAKEPROCEDURE( 6, 
                                      1, 
                                      atplotlib_ontour_2df_2021246, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13885, 
                       ADR( atplotlib_ctions_2df_63f2504b_v ), 
                       MAKEPROCEDURE( 6, 
                                      1, 
                                      atplotlib_ctions_2df_63f2504b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13897, 
                       ADR( atplotlib_projection_52547955_v ), 
                       scrt1_cons_2a( c13118, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
        INITIALIZEVAR( t13898, 
                       ADR( atplotlib_dwireframe_14ae0565_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      atplotlib_dwireframe_14ae0565, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13900, 
                       ADR( atplotlib__2dsurface_90248d55_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      atplotlib__2dsurface_90248d55, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13902, 
                       ADR( atplotlib__2dcontour_9f62c8eb_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      atplotlib__2dcontour_9f62c8eb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13904, 
                       ADR( atplotlib_d_2dlabels_4fc61fbc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      atplotlib_d_2dlabels_4fc61fbc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13906, 
                       ADR( atplotlib_data_2dbar_bb3cdb3_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib_data_2dbar_bb3cdb3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13908, 
                       ADR( atplotlib__2dsubplot_7df8d8c7_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib__2dsubplot_7df8d8c7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13910, 
                       ADR( atplotlib__2dsubplot_1b72953a_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib__2dsubplot_1b72953a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13912, 
                       ADR( atplotlib_lt_2dwidth_743852fd_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_lt_2dwidth_743852fd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13914, 
                       ADR( atplotlib_2dlabelled_b0760d19_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_2dlabelled_b0760d19, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13916, 
                       ADR( atplotlib_lot_2dbars_b91055c5_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      atplotlib_lot_2dbars_b91055c5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13923, 
                       ADR( atplotlib_dd_2dtitle_66f385ba_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      atplotlib_dd_2dtitle_66f385ba, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13925, 
                       ADR( atplotlib__2dspacing_43aae498_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib__2dspacing_43aae498, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13927, 
                       ADR( atplotlib_ing_2dtail_fc64d129_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      atplotlib_ing_2dtail_fc64d129, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13932, 
                       ADR( atplotlib_k_2dlabels_6444b7b3_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      atplotlib_k_2dlabels_6444b7b3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13934, 
                       ADR( atplotlib_nterpolate_178b6365_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      atplotlib_nterpolate_178b6365, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13936, 
                       ADR( atplotlib_terpolated_bb67f0e5_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      atplotlib_terpolated_bb67f0e5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13939, 
                       ADR( atplotlib_are_2daxes_34632140_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      atplotlib_are_2daxes_34632140, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13941, 
                       ADR( atplotlib_ate_2daxes_be48606d_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      atplotlib_ate_2daxes_be48606d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13944, 
                       ADR( atplotlib_cal_2daxes_e80805ac_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      atplotlib_cal_2daxes_e80805ac, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13947, 
                       ADR( atplotlib__2dlog_2dy_e37fce34_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      atplotlib__2dlog_2dy_e37fce34, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13949, 
                       ADR( atplotlib_lot_2dxlim_70546441_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      atplotlib_lot_2dxlim_70546441, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13951, 
                       ADR( atplotlib_lot_2dylim_c8e80324_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      atplotlib_lot_2dylim_c8e80324, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13953, 
                       ADR( atplotlib_p_2dlinear_745db0d0_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      atplotlib_p_2dlinear_745db0d0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13958, 
                       ADR( atplotlib_ot_2dline1_3f5d78a5_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      atplotlib_ot_2dline1_3f5d78a5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13960, 
                       ADR( atplotlib_dbandwidth_96bcb19f_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      atplotlib_dbandwidth_96bcb19f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14019, 
                       ADR( atplotlib__2ddensity_bcd402c2_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      atplotlib__2ddensity_bcd402c2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14021, 
                       ADR( atplotlib_un_2dtests_35f3c30d_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      atplotlib_un_2dtests_35f3c30d, 
                                      EMPTYLIST ) );
        return;
}
