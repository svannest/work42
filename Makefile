# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 15:04:23 by joinacio          #+#    #+#              #
#    Updated: 2016/12/16 10:20:48 by joinacio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRCS = error.c \
	   lecture.c \
	   main.c \
	   check.c \
	   struct.c \

OBJS = $(SRCS:.c=.o)

INCL = -I ./includes

LIBFT = -I ./libft

LIBFTH = ./libft/libft.a

SRCDIR	= ./src/

SRCINC = $(addprefix $(SRCDIR),$(SRCS))

all : $(NAME)

$(NAME) :
	@echo "\033[0;33m"
	gcc $(FLAGS) -c $(SRCINC) $(LIBFT) $(INCL)
	@sleep 0.1
	gcc $(FLAGS) -o $(NAME) $(OBJS) $(LIBFTH)
	@echo "\033[0;32m" \
	"\n\n"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"\
	"@@    @@ @@ @@ @@@@@@@@@@@@@@@@@@@@@@@@@@@"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"\
	"@ @@@@ @ @ @@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@"\
	"@@@@@@OCCCCooOOO8@@@@@@@@@@@@@@@@@@@@@@\n"\
	"@ @@@@ @  @@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@"\
	"@88c.   .o.:oO8888@@@@@@@@@@@@@@@@@@@@@\n"\
	"@ @@@@ @ @ @@@ @@@@@@@@@@@@@@@@@@@@@@@@@@"\
	"8o        .   CC8@CO@@@8@@@@@@@@@@@@@@@@\n"\
	"@ @@@@ @ @@ @@@@@@@@@@@@@@@@@@@@@@@@@@@CC"\
	":          : .CCo@OO@@@@@@@@@@@@@@@@@@@@\n"\
	"@@    @@ @@@ @ @@@@@@@@@@@@@@@@@@@@@@@::c"\
	"              :.  Oo:@@@88@888@@@@@@@@@@\n"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@...."\
	"                  .: c8OOOOO8O@@@@@@@@@\n"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@C  "\
	"   ...        ::       c8OcoCOC8@@@@@@@@\n"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@c.  "\
	"ooCCCoooooooooooo.      O@OCOCO@@@@@@@@\n"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  oo"\
	"CCCCCCc:.   coCCooccoo.  :OOO8@@@@@@@@@\n"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:.::"\
	".:cCoc:::.  cooCCCo:oOCoOOc8Oc  .@@@@@@\n"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Oc "\
	" :cooccooCCCooooCCCccoO8O:8@@@@O@@@@@@@\n"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@8@@@Cc:c"\
	"oCCCCoooCCCCCCCCCCCc::oCc  :oO8@@@@@@@@\n"\
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@oc   C"\
	"OOOCo::oCCCCCCCCCCooc .:C.  :oO8@@@@@@@@\n"\
	"OCOC@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@OC..CC"\
	"CCooc:oooCOCCCCooooc:::oc    OO@@@@@@@@\n"\
	"8@O.O@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@o.C"\
	"Co      .ccCCCCoooooc..:co::c.oO@@@@@@@@\n"\
	"8@c  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:  CC"\
	"c.:.     .coooooocc:    :ccoo oOO8@@@@@\n"\
	"O@o  O@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@o  oo"\
	":ccoCCCooooooooocc:.    .:::oo.oOOoC88@\n"\
	"8@c   C@@@@@@@@@@@@8  oC       .8@@@@@o :o"\
	"ooCCCCCCooooooocc:.         :co: c8O:::\n"\
	"OOo   .:cOO8OO@@@@@CoO@@@@@@.   .@@@@@@@@"\
	"Oooooooooooooooc:.              .CCCCooo\n"\
	"  :C .   o:. :.cOOOCoC@@@@@@@:   @@@@@@@@@"\
	"Coooooooooocc        :cc:       .cC8@@@\n"\
	"            .:oc:    .O8:o@@@@   @@@@@@@@@"\
	"@8.                .oooo:      cOOC@@@@\n"\
	"                  .:c::O@C       O@@@@@@@@"\
	"@@@@O             :oooooc::   :::c8@@@@\n"\
	"@@OCcccccccccc:.        oC8O        O@@@@@"\
	"@@@@@@c          :ccooocc     ..C8@@88:\n"\
	"OOOO88OoCCOO8CCO8@@@@@@@@@888888888@@@@@@@"\
	"@@@@@@c.         .:::ccc.     :8@8coCCC\n"\
	"COC::oCococcOC. oCOOOOOOOOCCCOC....:ooCOOO"\
	"O8@@@@@@8888OOOOOCCooooc     O8ocoCOCoo\n"\
	"coc..coCCocoOCCooooCCooCCooooCo    .:::coo"\
	"coCCCCOOOOOOOOOOOOO888888888888888OOCoc\n"\
	"cc:  :cooooCCoc.:..cooo:.  ::ccc   cooooCC"\
	"COocccCOOOCCCoooo:  OOCoCCo   oC :CoccO\n"\
	"\n" \
	"    FILLIT! Je sais ou tu t'caches! Viens ici que j'te butte enc***!\n" \
	"\033[00m"

clean :
	@echo "\033[0;31m"
	rm -f $(OBJS)
	@echo "\033[00m"

fclean : clean
	@echo "\033[0;31m"
	rm -f $(NAME) a.out
	@echo "\033[00m"

re : fclean all

.PHONY: all clean fclean re
