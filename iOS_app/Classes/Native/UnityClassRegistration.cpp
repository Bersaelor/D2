struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 96 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//12. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//13. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//14. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//15. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//16. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//17. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//18. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//19. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//20. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//21. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//22. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//23. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//24. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//25. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//26. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//27. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//28. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//29. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//30. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//31. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//32. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//33. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//34. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//35. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//36. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//37. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//38. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//39. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//40. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//41. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//42. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//43. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//44. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//45. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//46. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//47. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//48. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//49. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//50. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//51. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//52. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//53. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//54. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//55. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//56. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//57. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//58. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//59. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//60. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//61. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//62. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//63. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//64. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//65. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//66. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//67. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//68. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//69. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//70. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//71. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//72. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//73. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//74. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//75. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//76. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//77. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//78. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//79. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//80. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//81. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//82. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//83. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//84. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//85. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//86. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//87. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//88. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//89. WindZone
	void RegisterClass_WindZone();
	RegisterClass_WindZone();

	//90. Tree
	void RegisterClass_Tree();
	RegisterClass_Tree();

	//91. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//92. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//93. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//94. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

	//95. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

}
