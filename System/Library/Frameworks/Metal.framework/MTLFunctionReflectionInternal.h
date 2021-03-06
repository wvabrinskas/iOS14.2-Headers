/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLFunctionReflection.h>

@class NSArray, NSData;

@interface MTLFunctionReflectionInternal : MTLFunctionReflection {

	NSArray* _builtInArguments;
	NSArray* _arguments;
	NSData* _pluginReturnData;

}
-(id)initWithArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 pluginReturnData:(id)arg4 ;
-(id)pluginReturnData;
-(id)initWithDevice:(id)arg1 reflectionData:(id)arg2 functionType:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(id)arguments;
-(id)builtInArguments;
-(void)dealloc;
@end

