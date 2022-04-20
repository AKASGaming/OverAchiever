#pragma once
#include "main.hpp"

#include "bs-utils/shared/utils.hpp"

#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

#define PACK_PATH bs_utils::getDataDir(modInfo) + "/packs/"
#define PENDING_PACK_PATH bs_utils::getDataDir(modInfo) + "/pending_packs/"

namespace OverAchiever::Utils {

    std::vector<std::string> getAllFoldersInFolder(const std::string& path) {
        std::vector<std::string> strings;
        for (const auto & entry : fs::directory_iterator(path)) {
            if (entry.is_directory()) {
                strings.push_back(entry.path());
            }
        }
        return strings;
    }

    bool filesExistInFolder(const std::string& path) {
        return fs::is_empty(path);
    }
}