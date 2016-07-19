struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 64 classes
	//0. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//7. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//8. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//9. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//10. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//11. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//12. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//13. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//14. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//15. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//16. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//17. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//18. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//19. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//20. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//21. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//22. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//23. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//24. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//25. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//26. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//27. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//28. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//29. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//30. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//31. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//32. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//33. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//34. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//35. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//36. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//37. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//38. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//39. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//40. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//41. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//42. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//43. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//44. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//45. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//46. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//47. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//48. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//49. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//50. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//51. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//52. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//53. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//54. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//55. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//56. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//57. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//58. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//59. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//60. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//61. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//62. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//63. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
