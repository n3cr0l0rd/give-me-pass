#include "./main.h"

static const char *chars = "!\"'@#$%^&*()<>{}[]+-=,.;^:?~/|\\1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

void pass_gen_ascii(const size_t password_len)
{
	unsigned rand_char;
	srandom(getpid() ^ time(NULL));

	puts("------------------------");
	puts("\x1b[32mВаш пароль:\x1b[0m");
	for(size_t i = 0; i < password_len; i++)
	{
		rand_char = random()%strlen(chars);
		putchar(chars[rand_char]);
	}
	puts("\n------------------------");
}

void pass_gen_nums(const size_t password_len)
{
	unsigned rand_char;
	srandom(getpid() ^ time(NULL));

	puts("------------------------");
	puts("\x1b[32mВаш пароль:\x1b[0m");
	for(size_t i = 0; i < password_len; i++)
	{
		rand_char = random()%10 + 31; // От 31 до 40
		putchar(chars[rand_char]);
	}
	puts("\n------------------------");
}

void pass_gen_dalphs(const size_t password_len)
{
	unsigned rand_char;
	srandom(getpid() ^ time(NULL));

	puts("------------------------");
	puts("\x1b[32mВаш пароль:\x1b[0m");
	for(size_t i = 0; i < password_len; i++)
	{
		rand_char = random()%26 + 41; // От 41 до 66
		putchar(chars[rand_char]);
	}
	puts("\n------------------------");
}

void pass_gen_ualphs(const size_t password_len)
{
	unsigned rand_char;
	srandom(getpid() ^ time(NULL));

	puts("------------------------");
	puts("\x1b[32mВаш пароль:\x1b[0m");
	for(size_t i = 0; i < password_len; i++)
	{
		rand_char = random()%26 + 67; // От 67 до 92
		putchar(chars[rand_char]);
	}
	puts("\n------------------------");
}
