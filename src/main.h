#ifndef SRC_MAIN_H_
#define SRC_MAIN_H_

const char TAB = '\t';

void GetChar();
void Error(std::string s);
void Abort(std::string s);
void Expected(std::string s);
void Match(char x);
bool IsAlpha(char c);
bool IsDigit(char c);
char GetName();
char GetNum();
void Emit(const std::string& s);
void EmitLn(const std::string& s);
void Init();

#endif  // SRC_MAIN_H_
