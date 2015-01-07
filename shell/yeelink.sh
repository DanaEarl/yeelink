#! /bin/sh

#在单引号中填入yeelink给你的API KEY
YL_ApiKey='226019feeb3c9234525ec9f48031702a'
YL_URL=http://api.yeelink.net/v1.0/device/16683/sensor/28791/datapoints
temp=20
echo $temp
upcmd="curl --request POST --data '{\"value\":$temp}' --header U-ApiKey:$YL_ApiKey --verbose $YL_URL"

echo $upcmd|sh
