PREFIX = /usr/local
GSTL = ./GsTL
install: force
	cp -R -p -f ${GSTL} ${PREFIX}/include
force :
