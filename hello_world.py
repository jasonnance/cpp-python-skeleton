from ctypes import cdll

lib = cdll.LoadLibrary('./bin/libhelloworld.so')


class HelloWorld:
    def __init__(self):
        self.obj = lib.new_hello_world()

    def hello_world(self):
        lib.hello_world(self.obj)


if __name__ == '__main__':
    h = HelloWorld()
    h.hello_world()
