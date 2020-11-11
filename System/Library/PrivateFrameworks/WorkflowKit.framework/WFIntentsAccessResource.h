/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFIntentsAccessResource : WFAccessResource {

	NSString* _associatedAppIdentifier;

}
+(id)persistentIdentifierFromBundleIdentifier:(id)arg1 ;
+(id)bundleIdentifierFromPersistentIdentifier:(id)arg1 ;
+(BOOL)isSystemResource;
-(id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2 ;
-(id)initWithBundleIdentifierForDisplay:(id)arg1 ;
-(unsigned long long)globalLevelStatus;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)associatedAppIdentifier;
@end
