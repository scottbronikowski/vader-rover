function [totalgyro, offset] = processgyro(filename)

[imu,~] = readimufile(filename);
time = imu(2,:);
gyro = imu(18,:);
timestep = sum(imu(3,:))/length(imu(3,:));
timestep = timestep/1000; %for ms
i = find(abs(gyro)<20);
offset = sum(gyro(i))/length(i);
gyro = gyro-offset;
totalgyro = trapz(timestep*gyro);
gyroint = cumtrapz(timestep*gyro);
figure;
plot(time,gyro,time,gyroint);
title(filename);
legend('raw gyro','integrated gyro','Location','east');
end %function