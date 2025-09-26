#esptool.py --port /dev/ttyACM0  --baud $((115200*4)) write_flash 0x210000 doom1gba.wad
#esptool.py --port /dev/ttyACM0  --baud $((115200*4)) write_flash 0x314000 doom1gba.wad
esptool.py --port /dev/ttyACM0  --baud $((115200*4)) write_flash 0x1a4000 silviodoom.wad
#esptool.py --port /dev/ttyACM0  --baud $((115200*4)) write_flash 0x210000 gbadoomcompressed.wad 
#esptool.py --port /dev/ttyACM0  --baud $((115200*4)) write_flash 0x210000 gbadoom1.wad
#esptool.py --port /dev/ttyACM0  --baud $((115200*4)) write_flash 0x210000 doom1.wad
