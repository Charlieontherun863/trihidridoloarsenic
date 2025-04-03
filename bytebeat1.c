typedef struct IUnknown IUnknown;

int main(void) {
  for (DWORD t = 0; t < ((INT)32100 * BYTEBEAT_TIME); t++) {
    putchar(t&65536?(t/35):46+t/t*(t+46));
  }
  return 0x00;
}
