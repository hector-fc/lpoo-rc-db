#ifndef __definitions_h
#define __definitions_h

#include <string>

namespace lpoo {
  
  const char c_separator = '#';
  const std::string c_black_fg   = "\033[30m";
  const std::string c_red_fg     = "\033[31m";
  const std::string c_green_fg   = "\033[32m";
  const std::string c_yellow_fg  = "\033[33m";
  const std::string c_blue_fg    = "\033[34m";
  const std::string c_magenta_fg = "\033[35m";
  const std::string c_cyan_fg    = "\033[36m";
  const std::string c_white_fg   = "\033[37m";
  const std::string c_black_bg   = "\033[40m";
  const std::string c_red_bg     = "\033[41m";
  const std::string c_green_bg   = "\033[42m";
  const std::string c_yellow_bg  = "\033[43m";
  const std::string c_blue_bg    = "\033[44m";
  const std::string c_magenta_bg = "\033[45m";
  const std::string c_cyan_bg    = "\033[46m";
  const std::string c_white_bg   = "\033[47m";
  const std::string c_bold       = "\033[1m";
  const std::string c_no_color   = "\033[0m";

  const std::string c_menu_color = c_no_color+c_magenta_bg;
  const std::string c_menu_text_color = c_no_color+c_bold+c_black_bg+c_white_fg;

  const int c_levels[8] = {   0, 100, 220, 340,
                           460, 630, 800, 1020};
  const std::string c_titles[8] = { "Alquimista Iniciante", 
      "Alquimista Médio", "Alquimista Avançado", "Alquimista Especialista",
      "Mago Iniciante", "Mago Médio", "Mago Avançado", "Mago Especialista"};

  const int c_exp_per_difficulty[4] = {5, 15, 40, 90};
  const std::string c_name_difficulty[4] = {"Fácil", "Médio", "Difícil",
      "Muito Difícil" };

  const char c_graduation = 'G';
  const char c_master = 'M';
  const char c_doctor = 'D';

  const int c_program_math         = 0;
  const int c_program_stat         = 1;
  const int c_program_applied_math = 2;

  const std::string c_programs[3] = {"Matemática", "Estatística",
      "Matemática Aplicada"};
};

#endif
