#include <stdio.h>
enum Mark {Excellent = 5, Good = 4, Sat = 3, NotSat = 2};
enum MarkType {Zachet,Exam};
struct Subject
{
    char name[80];
    enum MarkType markType; 
    union {
        _Bool zachet;
        enum Mark mark;
    } mark;
    char date [11];
    char teacher[20];
    
    
};
struct Term
{
    unsigned short number;
    char year[9];
    struct Subject subjects[20];
};
struct Zachetka
{
    char firstName[30];
    char middleName[30];
    char lastName[30];
    struct Term terms[12];
    
};
int main(void)
{
    struct Zachetka z = 
    {
        .firstName = "Pavel",
        .middleName = "Sergeevich",
        .lastName = "Plotnikov",
        .terms =
        {
            {
                .number = 1,
                .year ="2018/2019",
                .subjects = {
                    {
                        .name = "SEPIT",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "24.12.2018",
                        .teacher = "Korableva"
                    },
                    {
                        .name = "Rusiz",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "25.12.2018",
                        .teacher = "Beznosova"
                    },
                    {
                        .name = "Infformatika",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "26.12.2018",
                        .teacher = "Golovackai"
                    },
                    {
                        .name = "Vedenie v proffesion",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "17.01.2019",
                        .teacher = "Kuplinova"
                    },
                    {
                        .name = "Inostrani izics",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "29.12.2018",
                        .teacher = "Kozhevnikova"
                    },
                    {
                        .name = "Filosofi",
                        .markType = Exam,
                        .mark = {.mark = 4},
                        .date = "17.01.2019",
                        .teacher = "Korableva"
                    },
                    {
                        .name = "Vishi Matematic",
                        .markType = Exam,
                        .mark = {.mark = 3},
                        .date = "24.01.2019",
                        .teacher = "Korableva"
                    },
                    {
                        .name = "AGiLA",
                        .markType = Exam,
                        .mark = {.mark = 4},
                        .date = "01.02.2019",
                        .teacher = "Gliev"
                    },
                }
            },
            {
                .number = 2,
                .year ="2018/2019",
                .subjects = {
                    {
                        .name = "KG",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "03.06.2019",
                        .teacher = "Rivlina"
                    },
                    {
                        .name = "Fizika",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "03.06.2019",
                        .teacher = "Degtirov"
                    },
                    {
                        .name = "ONPBDvI",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "05.06.2019",
                        .teacher = "Antipov"
                    },
                    {
                        .name = "TOE",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "06.06.2019",
                        .teacher = "Xanchev"
                    },
                    {
                        .name = "Fizkultura",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "9.10.2019",
                        .teacher = "Korolev"
                    },
                    {
                        .name = "Infformatika",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "18.06.2019",
                        .teacher = "Kravchenko"
                    },
                    {
                        .name = "Histori",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "24.06.2019",
                        .teacher = "Beglova"
                    },
                    {
                        .name = "Inostrani izics",
                        .markType = Exam,
                        .mark = {.mark = 4},
                        .date = "28.06.2019",
                        .teacher = "Molkova"
                    },
                    {
                        .name = "Vishi mat",
                        .markType = Exam,
                        .mark = {.mark = 4},
                        .date = "02.07.2019",
                        .teacher = "Raicin"
                    },
                }
            },
            {
                .number = 3,
                .year ="2019/2020",
                .subjects = {
                    {
                        .name = "TFKP",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "20.12.2019",
                        .teacher = "Raicin"
                    },
                    {
                        .name = "Fizkultura",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "23.12.2019",
                        .teacher = "Ganiev"
                    },
                    {
                        .name = "VVMPP",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "24.12.2019",
                        .teacher = "Zagvozdkina"
                    },
                    {
                        .name = "IRSS",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "25.12.2019",
                        .teacher = "Ziatina"
                    },
                    {
                        .name = "FOE",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "26.12.2019",
                        .teacher = "Vlasov"
                    },
                    {
                        .name = "TEC",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "27.12.2019",
                        .teacher = "Bakulin"
                    },
                    {
                        .name = "Fizika",
                        .markType = Exam,
                        .mark = {.mark = 3},
                        .date = "16.01.2020",
                        .teacher = "Degtirov"
                    },
                    {
                        .name = "TVIMS",
                        .markType = Exam,
                        .mark = {.mark = 4},
                        .date = "20.01.2020",
                        .teacher = "Demin"
                    },
                    {
                        .name = "Discret matematic",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "27.01.2020",
                        .teacher = "Chernousova"
                    },
                    {
                        .name = "Vich models",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "31.01.2020",
                        .teacher = "Semenova"
                    },
                   
                }
            }
        }
    };
    for(int j = 0; j < 3; ++j)
    {
        printf("%i ",z.terms[j].number);
        printf("%s\t","semestr");
        printf("%s\t",z.terms[j].year);
        printf("\n");
        printf("%-20s|%-6s|%-11s|%-20s|\r\n","Name","Mark","Date","Teacher" );
         	for (int i = 0; i < 8; ++i)
         	{
         		printf("%-20s|",z.terms[j].subjects[i].name);
         		if (z.terms[j].subjects[i].markType == Zachet)
         		{
         			printf("%-6s|",
         			z.terms[j].subjects[i].mark.zachet ? "Zachet":"Ne Zachet");
         		}
         		else
         		{
         		    printf("%-6d|",
         			z.terms[j].subjects[i].mark.mark);
         		}
         		printf("%-11s|",z.terms[j].subjects[i].date);
         		printf("%-20s|",z.terms[j].subjects[i].teacher);
         		printf("\r\n");
         	}
    }
    return 0;
}