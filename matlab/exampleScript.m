
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

function [mOut2dArray] = exampleScript(mIn2dArray)
a = arduino;
fs = 100; % Sample Rate in Hz   
imu = mpu9250(a,'SampleRate',fs,'OutputFormat','matrix'); 
tic;
stopTimer = 20;
magReadings=[];
while(toc<stopTimer)
    % Rotate the sensor around x axis from 0 to 360 degree.
    % Take 2-3 rotations to improve accuracy.
    % For other axes, rotate around that axis.
    [~,~,mag] = read(imu);
    magReadings = [magReadings;mag];
end

% For y axis, use magReadings (:,2) and for z axis use magReadings(:,3)
magx_min = min(magReadings(:,1));
magx_max = max(magReadings(:,1));
 x = (magx_max+magx_min)/2;
magy_min = min(magReadings(:,2));
magy_max = max(magReadings(:,2));
 y = (magy_max+magy_min)/2;
magz_min = min(magReadings(:,3));
magz_max = max(magReadings(:,3));
 z =(magz_max+magz_min)/2;
mOut2dArray = [x,y;1,1]
end