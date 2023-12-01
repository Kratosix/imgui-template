#include "App.h"
#include <vector>


void Myapp::renderUI(){
	ImGuiWindowFlags flags = 0;
	flags |= ImGuiWindowFlags_NoResize;
	flags |= ImGuiWindowFlags_MenuBar;
	flags |= ImGuiWindowFlags_NoTitleBar;
	ImGui::Begin("Hello", NULL, flags);
	// Starting of your custom code

	if(ImGui::BeginMenuBar()){
		if(ImGui::BeginMenu("Menu")){
			for (int i=0;i<=3;i++){
				ImGui::MenuItem("Item 1");
			}
			ImGui::EndMenu();
		}
		if(ImGui::BeginMenu("Search")){
			for (int i=0;i<=3;i++){
				ImGui::MenuItem("Item 2");
			}
			ImGui::EndMenu();
		}
		ImGui::EndMenuBar();
	}
	
	ImGui::Button("Button");
	ImGui::SameLine();
	ImGui::Text("This is some text");
	//End of your ImGui code

	ImGui::End();

}
