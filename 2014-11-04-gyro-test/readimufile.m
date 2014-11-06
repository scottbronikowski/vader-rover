function [IMU, ENC] = readimufile(filename)

fid = fopen(filename);

while 1
    tline = fgetl(fid);
    if (tline == -1) 
        break;
    end
    [temp_imu, imu_count] = sscanf(tline,...
        '%lf: IMU:time:%u:dt:%u:Y:%f:P:%f:R:%f:Y(a):%f:M_h(a):%f:M_h:%f:Ax:%f:Ay:%f:Az:%f:Mx:%f:My:%f:Mz:%f:Gx:%f:Gy:%f:Gz:%f');
    if imu_count == 18
        %fprintf('success\n');
        if exist('IMU')
            IMU = [IMU,temp_imu];
        else
            IMU = temp_imu;
        end
        continue;
    end
    
    [temp_enc, enc_count] = sscanf(tline,...
        '%lf:ENC:time:%lu:dt:%lu:L:%f:R:%f:MCL:%d:MCR:%d');
    if enc_count == 7
        %fprintf('success\n');
        if exist('ENC')
            ENC = [ENC,temp_enc];
        else
            ENC = temp_enc;
        end
        continue;
    end			       
end
fclose(fid);
end %function