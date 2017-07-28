#include "file_finder.h"

namespace fs = boost::filesystem;

namespace compiler
{
    std::vector<fs::path> find_files_to_compile(
        fs::path const& sketchDirectoryPath)
    {
        std::vector<fs::path> files;

        for (auto it = fs::directory_iterator{sketchDirectoryPath};
             it != fs::directory_iterator{}; ++it)
        {
            if (fs::is_regular_file(*it) &&
                (fs::extension(*it) == ".cpp" || fs::extension(*it) == ".ino"))
            {
                files.push_back(*it);
            }
        }

        return files;
    }
}