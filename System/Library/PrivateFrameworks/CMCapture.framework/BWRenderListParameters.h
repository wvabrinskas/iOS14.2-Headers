/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWRenderListParameterListProvider.h>

@class NSString;

@interface BWRenderListParameters : NSObject <BWRenderListParameterListProvider> {

	BWRenderListParameterList* _parameterList;

}

@property (nonatomic,readonly) BWRenderListParameterList* parameterList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(id)initWithParameterList:(BWRenderListParameterList*)arg1 ;
-(BWRenderListParameterNode*)firstNode;
-(BWRenderListParameterList*)parameterList;
-(void)dealloc;
@end
