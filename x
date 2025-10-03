output=output.mp4
rm -f ${output}
rm -rf log_simple
export LD_LIBRARY_PATH=/usr/local/lib:${LD_LIBRARY_PATH}
./ffmpeg_g -f v4l2 -i /dev/video0 -f alsa -ac 1 -i hw:1,0 -t 00:01:07 -c:v libx264 -c:a aac -strict experimental  ${output}
