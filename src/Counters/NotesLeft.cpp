#include "../../include/Main.hpp"

TextObject notesLeftText;

int notesLeft = 0;
int NotesCount = 0;

std::string GetPercentFromNotesLeftAndNotes(int NotesLeft, int Notes)
{
 int X = (Notes - NotesLeft) * 100 / (float)Notes;
 return std::to_string(X);
}
float SafeDivideScore(int total, int count)
{
 float result = round(((double)(total)) / (count));
 return result;
}
void NotesLeft_Update()
{
    if(notesLeftText.gameObj != nullptr)
    {
        notesLeft -= 1;
        notesLeftText.set("\n\nNotes Left: " + std::to_string(notesLeft) + " (" + GetPercentFromNotesLeftAndNotes(notesLeft, NotesCount) + "%)");
    }
}

void NotesLeft_GetNotes(IDifficultyBeatmap* difficultyBeatmap) {
    Il2CppObject* beatmapData;
    beatmapData = *il2cpp_utils::RunMethod<Il2CppObject*>( difficultyBeatmap, "get_beatmapData");
    NotesCount = *il2cpp_utils::RunMethod<int>( beatmapData, "get_notesCount");
}

void NotesLeft_Start(Il2CppObject* self)
{
    notesLeft = NotesCount;
    auto ScoreText = *GetFieldValue(self, "_scoreText");
    auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
    auto ScoreTextParentTransform = *GetPropertyValue(ScoreTextTransform, "parent");   
    notesLeftText.fontSize = 13.0F;
    if (!_360)
    {
        notesLeftText.sizeDelta = { -640, -20 };
    }
    else
    {
        notesLeftText.sizeDelta = { 0, -18 };
    }
    
    notesLeftText.parentTransform = ScoreTextParentTransform;
    CRASH_UNLESS(notesLeftText.create());
    notesLeftText.set("\n\nNotes Left: " + std::to_string(notesLeft) + " (" + GetPercentFromNotesLeftAndNotes(notesLeft, NotesCount) + "%)");
}

bool NotesLeft_CheckOk_Miss(Il2CppObject* noteController)
{
 auto NoteData = *il2cpp_utils::RunMethod<Il2CppObject*>(noteController, "get_noteData");
    int NoteType = *il2cpp_utils::RunMethod<int>(NoteData, "get_noteType");
    if ((NoteType == 0 || NoteType == 1))
    {
        return true;
    }      
    return false;
}
