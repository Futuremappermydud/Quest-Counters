#include "../include/Main.hpp"

void SaveConfig() {
    getConfig().config.RemoveAllMembers();
    getConfig().config.SetObject();
    rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
    getConfig().config.AddMember("Missed Notes Counter", Config.Missed, allocator);
    getConfig().config.AddMember("Hit Notes Counter", Config.Hits, allocator);
    getConfig().config.AddMember("Notes Left / Note Percentage", Config.NotesLeft, allocator);
    getConfig().config.AddMember("Saber Speed Counter", Config.Speed, allocator);
    getConfig().config.AddMember("Accuracy Counter", Config.Acc, allocator);
    getConfig().config.AddMember("Personal Best Counter", Config.PB, allocator);
    getConfig().config.AddMember("Hit Bomb Counter", Config.BombHits, allocator);
    getConfig().config.AddMember("Walls Left / Wall Percentage", Config.WallsLeft, allocator);
    getConfig().config.AddMember("Play Count(er)", Config.playCount, allocator);
    getConfig().config.AddMember("Use Legacy Acc Counter", Config.useLegacyAcc, allocator);
    //ConfigValue HitCounter(rapidjson::kObjectType);
    //getConfig().config.AddMember("Hit Counter Settings", HitCounter, allocator);
    getConfig().Write();
}   

bool LoadConfig() {
    getConfig().Load();
    //return false;
    bool foundEverything = true;
    if (getConfig().config.HasMember("Missed Notes Counter") && getConfig().config["Missed Notes Counter"].IsBool()) {
        Config.Missed = getConfig().config["Missed Notes Counter"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Hit Notes Counter") && getConfig().config["Hit Notes Counter"].IsBool()) {
        Config.Hits = getConfig().config["Hit Notes Counter"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Notes Left / Note Percentage") && getConfig().config["Notes Left / Note Percentage"].IsBool()) {
        Config.NotesLeft = getConfig().config["Notes Left / Note Percentage"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Accuracy Counter") && getConfig().config["Accuracy Counter"].IsBool()) {
        Config.Acc = getConfig().config["Accuracy Counter"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Saber Speed Counter") && getConfig().config["Saber Speed Counter"].IsBool()) {
        Config.Speed = getConfig().config["Saber Speed Counter"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Personal Best Counter") && getConfig().config["Personal Best Counter"].IsBool()) {
        Config.PB = getConfig().config["Personal Best Counter"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Hit Bomb Counter") && getConfig().config["Hit Bomb Counter"].IsBool()) {
        Config.BombHits = getConfig().config["Hit Bomb Counter"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Walls Left / Wall Percentage") && getConfig().config["Walls Left / Wall Percentage"].IsBool()) {
        Config.WallsLeft = getConfig().config["Walls Left / Wall Percentage"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Play Count(er)") && getConfig().config["Play Count(er)"].IsBool()) {
        Config.playCount = getConfig().config["Play Count(er)"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (getConfig().config.HasMember("Use Legacy Acc Counter") && getConfig().config["Use Legacy Acc Counter"].IsBool()) {
        Config.useLegacyAcc = getConfig().config["Use Legacy Acc Counter"].GetBool();
    }
    else {
        foundEverything = false;
    }
    if (foundEverything) {
        return true;
    }
    return false;
}
