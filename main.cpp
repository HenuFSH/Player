#include <iostream>

using namespace std;
#ifdef __cplusplus
extern "C"
{
#include "libavutil/avutil.h"

#include "SDL2/SDL.h"
#include "SDL2/SDL_revision.h"
}
#endif
int main()
{
    cout << "av_version_info is  " <<  av_version_info() << endl;

    SDL_version compiled;
    SDL_version linked;

    /* Enable standard application logging */
    SDL_LogSetPriority(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO);

#if SDL_VERSION_ATLEAST(2, 0, 0)
    SDL_Log("Compiled with SDL 2.0 or newer\n");
#else
    SDL_Log("Compiled with SDL older than 2.0\n");
#endif
    SDL_VERSION(&compiled);
    SDL_Log("Compiled version: %d.%d.%d.%d (%s)\n",
           compiled.major, compiled.minor, compiled.patch,
           SDL_REVISION_NUMBER, SDL_REVISION);
    SDL_GetVersion(&linked);
    SDL_Log("Linked version: %d.%d.%d.%d (%s)\n",
           linked.major, linked.minor, linked.patch,
           SDL_GetRevisionNumber(), SDL_GetRevision());
    SDL_Quit();
    return 0;
}
