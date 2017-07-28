#ifndef COMPILER_FILE_FINDER_H
#define COMPILER_FILE_FINDER_H

#include <boost/filesystem.hpp>
#include <vector>

namespace compiler
{
    std::vector<boost::filesystem::path> find_files_to_compile(boost::filesystem::path const& sketchDirectoryPath);
}

#endif
