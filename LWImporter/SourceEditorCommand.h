//
//  SourceEditorCommand.h
//  LWImporter
//
//  Created by sunhr on 2016/11/4.
//  Copyright © 2016年 Uncle Wang Tech. All rights reserved.
//

#import <XcodeKit/XcodeKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LWImporterErrorType) {
    LWImporterErrorTypeEmptySelection = 1,
    LWImporterErrorTypeMultipleSelection,
    LWImporterErrorTypeNoSelectedString,
    LWImporterErrorTypeUnsupportedFileType,
    LWImporterErrorTypeAlreadyImported,
};

@interface SourceEditorCommand : NSObject <XCSourceEditorCommand>

@end

NS_ASSUME_NONNULL_END
