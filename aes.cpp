#include "aes.hpp"
namespace sieve
{
    namespace crypto
    {
        unsigned char* AES::get_ciphertext() 
        {
            auto* returnstr = new unsigned char[ciphertext_len];
            memcpy(returnstr, ciphertext_, ciphertext_len);
            return returnstr;
        }
    }
}