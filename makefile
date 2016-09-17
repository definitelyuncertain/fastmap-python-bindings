all : python_fastmap

PY=python
CFLAGS=build_ext -i
CUSTOM_LIB_PATH=/usr/local/lib

python_fastmap : python-fastmap-setup.py
	$(PY) python-fastmap-setup.py $(CFLAGS)