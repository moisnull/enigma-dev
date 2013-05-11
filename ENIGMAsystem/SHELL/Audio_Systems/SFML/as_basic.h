// Memory Shit //
bool sound_exists(int sound);
int sound_add(std::string fname, int kind, bool preload);
void sound_delete(int sound);
bool sound_replace(int sound, std::string fname, int kind, bool preload);

// Baics //
bool sound_play(int sound);
#define sound_resume sound_play
bool sound_loop(int sound);
void sound_stop(int sound);
void sound_stop_all();
bool sound_pause(int sound);
void sound_pause_all();
void sound_resume_all();

// Gets //
bool sound_isplaying(int sound);
bool sound_ispaused(int sound);
float sound_get_position(int sound);
float sound_get_length(int sound);
int sound_get_samplerate(int sound);
int sound_get_channels(int sound);

// Sets //
void sound_global_volume(float volume);
void sound_set_volume(int sound, float volume);
void sound_seek(int sound, float position);
void sound_seek_all(float position);
void sound_set_pitch(int sound, float pitch);
void sound_3d_set_sound_position(int sound,int x,int y,int z);
void sound_3d_set_sound_distance(int sound, float mindist, float maxdist);
int sound_get_x(int sound);
int sound_get_y(int sound);
int sound_get_z(int sound);
float sound_get_volume(int sound);
float sound_get_pitch(int sound);