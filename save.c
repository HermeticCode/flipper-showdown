//save.c
// To save
FILE* save = fopen("/ext/apps_data/showdown_save.dat", "wb");
fwrite(&user_stats, sizeof(UserStats), 1, save);
fclose(save);

// To load
FILE* save = fopen("/ext/apps_data/showdown_save.dat", "rb");
if(save) {
    fread(&user_stats, sizeof(UserStats), 1, save);
    fclose(save);
}
// If the file doesn't exist, user_stats will remain uninitialized
