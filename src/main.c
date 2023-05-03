#include "./main.h"

void print_logo(void)
{
	puts("\x1b[1m*********************");
	puts("*   GIVE ME PASS!   *");
	puts("*********************\x1b[0m\n");
}

void get_password_length(size_t *pass)
{
	char answer;
	
	printf("Введите длину пароля: ");
	if((scanf("%lu", pass) != 1) || (!(*pass)))
	{
		puts("\x1b[31;1mДлина пароля не может быть нулевой!\x1b[0m");
		exit(EXIT_FAILURE);
	}

	while(*pass <= 8)
	{
		puts("\x1b[33;1m\nДлина пароля слишком мала!\x1b[0m");
		printf("Все равно продолжить? (y/n) ");

		while(getchar() != '\n') continue; // Сброс буффера ввода
		
		if((answer = getchar()) == 'y')
		{ putchar('\n'); return; }

		else
		{
			putchar('\n');
			printf("Введите длину пароля: ");
			scanf("%lu", pass);
		}
	}
}

void print_help(const char *program_name)
{
	puts("Это программа для генерации надежных паролей\nИспользование:");
	printf("  %s [тип пароля]\n\n", program_name);
	puts("Опции:");
	puts("  -a, --ascii      Пароль на основе ASCII символов");
	puts("  -n, --numbers    Пароль на основе чисел");
	puts("  -d, --down-alphs Пароль на основе английских букв нижнего регистра");
	puts("  -u, --up-alphs   Пароль на основе английских букв верхнего регистра\n");
	puts("  -h, --help       Вывести меню помощи\n");
	puts("\x1B[31;1mЗавершение...\x1b[0m");
}

int main(int argc, char *argv[])
{
	size_t password_len = 0;

	int opt;
	const char *short_opts = "l:anduh";
	struct option long_opts[] =
	{
		{"ascii",			 no_argument,	NULL, 'a'},
		{"numbers",    no_argument, NULL, 'n'},
		{"down-alphs", no_argument, NULL, 'd'},
		{"up-alphs", 	 no_argument, NULL, 'u'},
		{"help", 			 no_argument, NULL, 'h'},
		{NULL, 0, NULL, 0}
	};

	print_logo();

	if(argc != 2)
	{
		print_help(argv[0]);
		return EXIT_FAILURE;
	}

	opterr = 0;
	while((opt = getopt_long(argc, argv, short_opts, long_opts, 0)) != -1)
	{
		switch(opt)
		{	
			case 'a':
				get_password_length(&password_len);
				pass_gen_ascii(password_len);
				break;

			case 'n':
				get_password_length(&password_len);
				pass_gen_nums(password_len);
				break;

			case 'd':
				get_password_length(&password_len);
				pass_gen_dalphs(password_len);
				break;

			case 'u':
				get_password_length(&password_len);
				pass_gen_ualphs(password_len);
				break;

			case 'h':
			case '?':
			default: print_help(argv[0]);
		}
	}

	return EXIT_SUCCESS;
}
