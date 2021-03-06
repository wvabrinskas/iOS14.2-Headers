/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFContentProperty;

@interface WFNegativeContentProperty : NSObject <NSCopying> {

	WFContentProperty* _property;

}

@property (nonatomic,copy,readonly) WFContentProperty * property;              //@synthesize property=_property - In the implementation block
-(WFContentProperty *)property;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

