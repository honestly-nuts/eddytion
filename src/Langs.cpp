#include "Editor.h"

void Editor::initLangs() {
  map<string, string> python3 {
    {"number", R"(([+-]?(\d*[.])?\d+))"},
    {"string", R"((\"((\\\"|[^\"\n])*)\"))"},
    {"keyword", "(continue|nonlocal|finally|assert|except|global|import|lambda|return|False|break|class|raise|while|yield|None|True|elif|else|from|pass|with|and|def|del|for|not|try|as|if|in|is|or)"},
    {"operator", R"((\+|-|\*|\/|%|\*\*|\/\/|==|!=|>=|<=|<<|>>|>|<|=|\+=|-=|\*=|\/=|%=|\*\*=|\/\/=|&|\||\^|~|@))"}
  };
  this->langs["python3"] = python3;
  file_extension_to_lang["python3"] = vector<string>("py", "py3");
}
