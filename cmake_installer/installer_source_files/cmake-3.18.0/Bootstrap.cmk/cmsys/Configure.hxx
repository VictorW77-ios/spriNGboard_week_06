/*
 * Generated by /home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/bootstrap
 * Version:     $Revision$
 *
 * Source directory: /home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0
 * Binary directory: /home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/Bootstrap.cmk
 *
 * C compiler:   gcc
 * C flags:        
 *
 * C++ compiler: g++
 * C++ flags:       
 *
 * Make:         gmake
 *
 * Sources:
 *   cmAddCustomCommandCommand   cmAddCustomTargetCommand   cmAddDefinitionsCommand   cmAddDependenciesCommand   cmAddExecutableCommand   cmAddLibraryCommand   cmAddSubDirectoryCommand   cmAddTestCommand   cmArgumentParser   cmBinUtilsLinker   cmBinUtilsLinuxELFGetRuntimeDependenciesTool   cmBinUtilsLinuxELFLinker   cmBinUtilsLinuxELFObjdumpGetRuntimeDependenciesTool   cmBinUtilsMacOSMachOGetRuntimeDependenciesTool   cmBinUtilsMacOSMachOLinker   cmBinUtilsMacOSMachOOToolGetRuntimeDependenciesTool   cmBinUtilsWindowsPEGetRuntimeDependenciesTool   cmBinUtilsWindowsPEDumpbinGetRuntimeDependenciesTool   cmBinUtilsWindowsPELinker   cmBinUtilsWindowsPEObjdumpGetRuntimeDependenciesTool   cmBreakCommand   cmBuildCommand   cmCMakeMinimumRequired   cmCMakePolicyCommand   cmCPackPropertiesGenerator   cmCacheManager   cmCheckCustomOutputs   cmCommand   cmCommandArgumentParserHelper   cmCommands   cmCommonTargetGenerator   cmComputeComponentGraph   cmComputeLinkDepends   cmComputeLinkInformation   cmComputeTargetDepends   cmConditionEvaluator   cmConfigureFileCommand   cmContinueCommand   cmCoreTryCompile   cmCreateTestSourceList   cmCustomCommand   cmCustomCommandGenerator   cmCustomCommandLines   cmDefinePropertyCommand   cmDefinitions   cmDepends   cmDependsC   cmDocumentationFormatter   cmEnableLanguageCommand   cmEnableTestingCommand   cmExecProgramCommand   cmExecuteProcessCommand   cmExpandedCommandArgument   cmExportBuildFileGenerator   cmExportFileGenerator   cmExportInstallFileGenerator   cmExportSet   cmExportTryCompileFileGenerator   cmExprParserHelper   cmExternalMakefileProjectGenerator   cmFileCommand   cmFileCopier   cmFileInstaller   cmFileTime   cmFileTimeCache   cmFileTimes   cmFindBase   cmFindCommon   cmFindFileCommand   cmFindLibraryCommand   cmFindPackageCommand   cmFindPathCommand   cmFindProgramCommand   cmForEachCommand   cmFunctionBlocker   cmFunctionCommand   cmFSPermissions   cmGeneratedFileStream   cmGeneratorExpression   cmGeneratorExpressionContext   cmGeneratorExpressionDAGChecker   cmGeneratorExpressionEvaluationFile   cmGeneratorExpressionEvaluator   cmGeneratorExpressionLexer   cmGeneratorExpressionNode   cmGeneratorExpressionParser   cmGeneratorTarget   cmGetCMakePropertyCommand   cmGetDirectoryPropertyCommand   cmGetFilenameComponentCommand   cmGetPipes   cmGetPropertyCommand   cmGetSourceFilePropertyCommand   cmGetTargetPropertyCommand   cmGetTestPropertyCommand   cmGlobalCommonGenerator   cmGlobalGenerator   cmGlobalUnixMakefileGenerator3   cmGlobVerificationManager   cmHexFileConverter   cmIfCommand   cmIncludeCommand   cmIncludeGuardCommand   cmIncludeDirectoryCommand   cmIncludeRegularExpressionCommand   cmInstallCommand   cmInstallCommandArguments   cmInstallDirectoryGenerator   cmInstallExportGenerator   cmInstallFilesCommand   cmInstallFilesGenerator   cmInstallGenerator   cmInstallScriptGenerator   cmInstallSubdirectoryGenerator   cmInstallTargetGenerator   cmInstallTargetsCommand   cmInstalledFile   cmLDConfigLDConfigTool   cmLDConfigTool   cmLinkDirectoriesCommand   cmLinkItem   cmLinkItemGraphVisitor   cmLinkLineComputer   cmLinkLineDeviceComputer   cmListCommand   cmListFileCache   cmLocalCommonGenerator   cmLocalGenerator   cmLocalUnixMakefileGenerator3   cmMSVC60LinkLineComputer   cmMacroCommand   cmMakeDirectoryCommand   cmMakefile   cmMakefileExecutableTargetGenerator   cmMakefileLibraryTargetGenerator   cmMakefileTargetGenerator   cmMakefileUtilityTargetGenerator   cmMarkAsAdvancedCommand   cmMathCommand   cmMessageCommand   cmMessenger   cmNewLineStyle   cmOSXBundleGenerator   cmOptionCommand   cmOrderDirectories   cmOutputConverter   cmParseArgumentsCommand   cmPathLabel   cmPolicies   cmProcessOutput   cmProjectCommand   cmPropertyDefinition   cmPropertyMap   cmReturnCommand   cmRulePlaceholderExpander   cmRuntimeDependencyArchive   cmScriptGenerator   cmSearchPath   cmSeparateArgumentsCommand   cmSetCommand   cmSetDirectoryPropertiesCommand   cmSetPropertyCommand   cmSetSourceFilesPropertiesCommand   cmSetTargetPropertiesCommand   cmSetTestsPropertiesCommand   cmSiteNameCommand   cmSourceFile   cmSourceFileLocation   cmState   cmStateDirectory   cmStateSnapshot   cmString   cmStringAlgorithms   cmStringReplaceHelper   cmStringCommand   cmSubcommandTable   cmSubdirCommand   cmSystemTools   cmTarget   cmTargetCompileDefinitionsCommand   cmTargetCompileFeaturesCommand   cmTargetCompileOptionsCommand   cmTargetIncludeDirectoriesCommand   cmTargetLinkLibrariesCommand   cmTargetLinkOptionsCommand   cmTargetPrecompileHeadersCommand   cmTargetPropCommandBase   cmTargetPropertyComputer   cmTargetSourcesCommand   cmTest   cmTestGenerator   cmTimestamp   cmTryCompileCommand   cmTryRunCommand   cmUnsetCommand   cmUVHandlePtr   cmUVProcessChain   cmVersion   cmWhileCommand   cmWorkingDirectory   cmake    cmakemain   cmcmd   
 * STD Sources:
 *   memory   optional   shared_mutex   string_view   utility    string_view 
 * LexerParser Sources:
 *   cmCommandArgumentLexer   cmCommandArgumentParser   cmExprLexer   cmExprParser    cmListFileLexer 
 * kwSys Sources:
 *   Directory   EncodingCXX   FStream   Glob   RegularExpression   SystemTools     EncodingC     ProcessUNIX     String     System     Terminal
 * libuv Sources:
 *     src/strscpy.c     src/timer.c     src/uv-common.c     src/unix/cmake-bootstrap.c     src/unix/core.c     src/unix/fs.c     src/unix/loop.c     src/unix/loop-watcher.c     src/unix/no-fsevents.c     src/unix/pipe.c     src/unix/poll.c     src/unix/posix-hrtime.c     src/unix/posix-poll.c     src/unix/process.c     src/unix/signal.c     src/unix/stream.c     
 */

/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing#kwsys for details.  */
#ifndef cmsys_Configure_hxx
#define cmsys_Configure_hxx

/* Include C configuration.  */
#include <cmsys/Configure.h>

/* Whether wstring is available.  */
#define cmsys_STL_HAS_WSTRING 1
/* Whether <ext/stdio_filebuf.h> is available. */
#define cmsys_CXX_HAS_EXT_STDIO_FILEBUF_H                         \
  1
/* Whether the translation map is available or not. */
#define cmsys_SYSTEMTOOLS_USE_TRANSLATION_MAP                     \
  1

#if defined(__SUNPRO_CC) && __SUNPRO_CC > 0x5130 && defined(__has_attribute)
#  define cmsys__has_cpp_attribute(x) __has_attribute(x)
#elif defined(__has_cpp_attribute)
#  define cmsys__has_cpp_attribute(x) __has_cpp_attribute(x)
#else
#  define cmsys__has_cpp_attribute(x) 0
#endif

#if __cplusplus >= 201103L
#  define cmsys_NULLPTR nullptr
#else
#  define cmsys_NULLPTR 0
#endif

#ifndef cmsys_FALLTHROUGH
#  if __cplusplus >= 201703L &&                                               \
    cmsys__has_cpp_attribute(fallthrough)
#    define cmsys_FALLTHROUGH [[fallthrough]]
#  elif __cplusplus >= 201103L &&                                             \
    cmsys__has_cpp_attribute(gnu::fallthrough)
#    define cmsys_FALLTHROUGH [[gnu::fallthrough]]
#  elif __cplusplus >= 201103L &&                                             \
    cmsys__has_cpp_attribute(clang::fallthrough)
#    define cmsys_FALLTHROUGH [[clang::fallthrough]]
#  endif
#endif
#ifndef cmsys_FALLTHROUGH
#  define cmsys_FALLTHROUGH static_cast<void>(0)
#endif

#undef cmsys__has_cpp_attribute

/* If building a C++ file in kwsys itself, give the source file
   access to the macros without a configured namespace.  */
#if defined(KWSYS_NAMESPACE)
#  if !cmsys_NAME_IS_KWSYS
#    define kwsys cmsys
#  endif
#  define KWSYS_NAME_IS_KWSYS cmsys_NAME_IS_KWSYS
#  define KWSYS_STL_HAS_WSTRING cmsys_STL_HAS_WSTRING
#  define KWSYS_CXX_HAS_EXT_STDIO_FILEBUF_H                                   \
    cmsys_CXX_HAS_EXT_STDIO_FILEBUF_H
#  define KWSYS_FALLTHROUGH cmsys_FALLTHROUGH
#  define KWSYS_SYSTEMTOOLS_USE_TRANSLATION_MAP                               \
    cmsys_SYSTEMTOOLS_USE_TRANSLATION_MAP
#endif

#endif
