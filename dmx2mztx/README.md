dmx2mztx
========

mkdir ~/Build
cd ~/Build/

install libbcm2835:
wget http://www.airspayce.com/mikem/bcm2835/bcm2835-1.68.tar.gz
tar xf bcm2835-1.68.tar.gz
cd bcm2835-1.68/
./configure
make
sudo make install

sudo vi /boot/cmdline.txt
# add to end: isolcpus=3

cd ~/Build

git clone https://github.com/haiko21/raspimztx.git
cd raspimztx/dmx2mztx
make

sudo cp dmx2mztx /usr/local/bin/
sudo cp dmx2mztx.service /etc/systemd/system/
sudo systemctl daemon-reload
sudo systemctl enable dmx2mztx.service
sudo systemctl start dmx2mztx

