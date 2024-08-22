#ifndef HEADER_FILE_B_H
#define HEADER_FILE_B_H
struct GameserverService;
struct Config;
struct AppBaseConfig{
std::string app_name;
std::string built_time;
std::string game_version;
std::string code_version;
std::string rely_version;
std::string branch_name;
uint32_t auto_reload_config_interval;
int argc;
char **argv;
};


#endif