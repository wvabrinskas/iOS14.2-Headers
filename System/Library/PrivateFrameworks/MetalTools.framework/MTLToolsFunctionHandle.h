/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLFunctionHandle.h>

@class MTLToolsFunction, NSString;

@interface MTLToolsFunctionHandle : MTLToolsObject <MTLFunctionHandle> {

	MTLToolsFunction* _function;

}

@property (readonly) MTLToolsFunction * function;                   //@synthesize function=_function - In the implementation block
@property (readonly) unsigned long long functionType; 
@property (readonly) NSString * name; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)functionType;
-(MTLToolsFunction *)function;
-(NSString *)name;
-(void)dealloc;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 function:(id)arg3 ;
@end
