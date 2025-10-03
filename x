output=output.mp4
rm -f ${output}
./ffmpeg_g -f v4l2 -i /dev/video0 -f alsa -i hw:0,0 -t 10 -c:v libx264 -c:a aac -strict experimental ${output}
