all:
	qmk compile -kb crkbd -km rdpopov

flash:
	qmk flash -kb crkbd -km rdpopov
