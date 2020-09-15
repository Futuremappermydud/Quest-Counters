#ifndef CUSTOMUI_DEFINED
#define CUSTOMUI_DEFINED

#include <string>
#include "../../beatsaber-hook/shared/utils/typedefs.h"

namespace CustomUI { 
    class TextObject {
        private:
            // This counter increments every time a CustomUIText object is created by the same mod.
            static int counter;
            // This is the name prefix of the CustomUIText object. It has the counter appended to it.
            std::string name = "CustomUIText";
        public:
            // The TextMeshProUGUI Il2CppObject* of the created object.
            Il2CppObject *textMesh = nullptr;
            // The GameObject Il2CppObject* of the created object.
            Il2CppObject *gameObj = nullptr;
            // The desired Color of the text object.
            Color color = {1.0, 1.0, 1.0, 1.0};
            // The desired text of the text object.
            std::string text = "Default";
            // The desired font size of the text object.
            float fontSize = 40.0f;
            // The desired parent transform of the text object.
            Il2CppObject *parentTransform = nullptr;
            // The desired anchorMin position of the text object.
            Vector2 anchorMin = {0.0, 1.0};
            // The desired anchorMax position of the text object.
            Vector2 anchorMax = {0.0, 1.0};
            // The desired sizeDelta position of the text object.
            Vector2 sizeDelta = {0.0, 1.0};
            // The desired anchoredPosition of the text object.
            Vector2 anchoredPosition = {0.0, 0.0};
            // Creates the text object in game.
            // Returns true on success, false otherwise.
            bool create();
            // Sets the text.
            // Returns true on success, false otherwise.
            bool set(std::string_view text);
            // Destroys the TextObject, removing dangling pointers.
            // Returns true on success, false otherwise.
            bool destroy();
    };
    // Except where mentioned, original code by Rugtveit and only slight modifications by zoller27osu.
    class RawImageObject : public Il2CppObject {
        private:
            // This counter increments every time a CustomUIRawImage object is created by the same mod.
            static int counter;
            // This is the name prefix of the CustomUIRawImage object. It has the counter appended to it.
            std::string name = "CustomUIRawImage";
            // This is the texture2D object.
            Il2CppObject *recievedTexture2D;
            // This is the WebRequest object. Used throughout the create to create texture2D used in rawImage.
            Il2CppObject *WWW;
            // This is the SendWebRequest object. We use callback in SendWebRequest to create an action that is called whenever we get the response back.
            Il2CppObject *sendWebRequestObj;

        public:
            // The RawImage Il2CppObject* of the created object.
            Il2CppObject *rawImage = nullptr;
            // The GameObject Il2CppObject* of the created object.
            Il2CppObject *gameObj = nullptr;
            // The desired Color of the rawImage object.
            Color color = {1.0, 1.0, 1.0, 1.0};
            // The desired parent transform of the rawImage object.
            Il2CppObject *parentTransform = nullptr;
            // The desired anchorMin position of the rawImage object.
            Vector2 anchorMin = {0.5, 0.5};
            // The desired anchorMax position of the rawImage object.
            Vector2 anchorMax = {0.5, 0.5};
            // The desired sizeDelta position of the rawImage object.
            Vector2 sizeDelta = {0.0, 0.0};
            // The desired anchoredPosition of the rawImage object.
            Vector2 anchoredPosition = {0.0, 0.0};
            // The desired url of the rawImage object;
            std::string url = "!NoUrl!";
            // Monitors and logs the download progress. Will block the thread it is run in!
            // Written by zoller27osu.
            static void monitorProgress(RawImageObject* obj);
            // Creates the rawImage object in game.
            // Returns true on success, false otherwise.
            static bool textureWebRequestComplete(RawImageObject* obj, Il2CppObject* asyncOp);
            bool create();
    };
} // namespace CustomUI

#endif /* CUSTOMUI_DEFINED */
