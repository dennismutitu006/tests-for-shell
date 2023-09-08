#!/bin/bash

if [ "$(getconf LONG_BIT)" = "64" ]; then
	maxpid = 4194303

else
	maxpid = 32767

fi



echo "The maximum PID value is: $maxpid"

