// buforaac_for_github_version
#include "buforaac_dynamic_encrypt.h" // lib for encryption
#include <sys/mman.h>
#include <link.h>


static uint8_t runtime_key[HW_KEY_SIZE];
static uint8_t runtime_iv[BUFORA_IV_SIZE];


void dynamic_encrypt_executable() {
    Dl_info info;
    if (dladdr((void*)dynamic_encrypt_executable, &info)) 


    // its demo code, full source code not in a github, its a big secret!
// buforaac 05.07.2025