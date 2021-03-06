/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>

@class NSString, NSSet;

@interface WFDictionaryParameter : WFParameter {

	NSString* _localizedItemTypeName;
	NSString* _localizedNewItemTypeName;
	NSSet* _allowedValueTypes;

}

@property (nonatomic,readonly) NSString * localizedItemTypeName;                 //@synthesize localizedItemTypeName=_localizedItemTypeName - In the implementation block
@property (nonatomic,readonly) NSString * localizedNewItemTypeName;              //@synthesize localizedNewItemTypeName=_localizedNewItemTypeName - In the implementation block
@property (nonatomic,readonly) NSSet * allowedValueTypes;                        //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(NSString *)localizedItemTypeName;
-(NSString *)localizedNewItemTypeName;
-(NSSet *)allowedValueTypes;
@end

