[![Nunchuk  Logo](https://nunchuk.io/wp-content/uploads/2021/03/Horizontal-Logo-2.png)](https://nunchuk.io)

## About
This repo contains the source code for the [Nunchuk](https://nunchuk.io) desktop GUI.

Source code for the underlying Bitcoin library can be found at [libnunchuk](https://github.com/nunchuk-io/libnunchuk).

## Build instructions 

Follow these steps to build the application for your platform.

## Tools
**Qt libraries and Qt Creator**

 Download Qt for your platform [Qt offline installer](https://www.qt.io/offline-installers).
 You will also need Visual studio 2017 or 2019 (for Windows).
```
 Notes: 
        Qt version 5.12 or higher is recommended
        Windows: Select compiler MSCV 2017 (or 2019) 64 - bit (or 32 bit depends on your OS)
 	Linux: Compiler GCC 64 or 32
 	MAC:   Compiler GCC 64 or 32 (macOS)
```
**Setup**
>**Clone project and fetch submodules**
>
``` 
	git clone https://github.com/nunchuk-io/nunchuk-desktop
	cd nunchuk-desktop
	git submodule update --init --recursive
	git -C contrib/libnunchuk submodule update --init --recursive
```
**Build [contrib/libnunchuk](https://github.com/nunchuk-io/libnunchuk)**

>**Build Bitcoin Core ([details](https://github.com/bitcoin/bitcoin/tree/master/doc#building))**
>
```
	cd contrib/libnunchuk/contrib/bitcoin
	./autogen.sh
	./configure --without-gui --disable-zmq --with-miniupnpc=no # important
	make -j8
	cd ..
```
>**Build Sqlcipher ([details](https://github.com/sqlcipher/sqlcipher))**
>
```
	cd libnunchuk/contrib/sqlcipher
	./configure --enable-tempstore=yes CFLAGS="-DSQLITE_HAS_CODEC" LDFLAGS="-lcrypto"
	make -j8
	popd
	cd ..
```

>**Build nunchuk-desktop**
>
```
	Open Qt Creator
        Open nunchuk-desktop project via CMakeLists.txt
	Select your Kit (include compiler) : Desktop Qt %{Qt:Version} GCC 64bit,  (such as Desktop Qt 5.12.8 GCC 64bit)
	Run qmake
	Build
	...
        Run the application
```
