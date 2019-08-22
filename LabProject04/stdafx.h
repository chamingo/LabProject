// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

// 임포트 라이브러리를 링커 속성에서 입력하지 않아도 되도록

#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "winmm.lib")
#include "targetver.h"

// 클라이언트 영역의 크기 또는 후면 버퍼의 크기를 나타내는 상수
#define FRAME_BUFFER_WIDTH	640
#define FRAME_BUFFER_HEIGHT	480

#define _WITH_SWAPCHAIN_FULLSCREEN_STATE

// #define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
// Windows 헤더 파일:
#include <windows.h>


// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <string>
#include <wrl.h>
#include <shellapi.h>

#include <d3d12.h>	// Direct 3D 12 API 함수를 사용하기 위해 필요
#include <dxgi1_4.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <DirectXColors.h>
#include <DirectXCollision.h>

using namespace DirectX;
using namespace DirectX::PackedVector;

using Microsoft::WRL::ComPtr;

// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
