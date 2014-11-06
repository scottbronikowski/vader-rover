files = {'./left-1-1.txt';
    './left-1-2.txt';
    './left-1-3.txt';
    './left-1-4.txt';
    './left-1-5.txt';
    './left-2-1.txt';
    './left-2-2.txt';
    './left-2-3.txt';
    './left-2-4.txt';
    './left-2-5.txt';
    './left-3-1.txt';
    './left-3-2.txt';
    './left-3-3.txt';
    './left-3-4.txt';
    './left-3-5.txt';
    './right-1-1.txt';
    './right-1-2.txt';
    './right-1-3.txt';
    './right-1-4.txt';
    './right-1-5.txt';
    './right-2-1.txt';
    './right-2-2.txt';
    './right-2-3.txt';
    './right-2-4.txt';
    './right-2-5.txt';
    './right-3-1.txt';
    './right-3-2.txt';
    './right-3-3.txt';
    './right-3-4.txt';
    './right-3-5.txt'};
totalgyro = zeros(length(files),1);
offset = zeros(length(files),1);
for i = 1:length(files)
    [totalgyro(i), offset(i)] = ...
        processgyro(files{i});
end

singlegyro = abs(totalgyro);
singlegyro(6:10) = singlegyro(6:10)/2;
singlegyro(11:15) = singlegyro(11:15)/3;
singlegyro(21:25) = singlegyro(21:25)/2;
singlegyro(26:30) = singlegyro(26:30)/3;

totalmean = mean(singlegyro);
totalstd = std(singlegyro);
leftmean = mean(singlegyro(1:15));
leftstd = std(singlegyro(1:15));
rightmean = mean(singlegyro(16:30));
rightstd = std(singlegyro(16:30));

offsetmean = mean(offset);
offsetstd = std(offset);



