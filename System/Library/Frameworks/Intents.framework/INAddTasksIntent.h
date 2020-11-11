/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INAddTasksIntentExport.h>

@class NSArray, INTaskList, INSpatialEventTrigger, INTemporalEventTrigger, INContactEventTrigger, INIntent, NSString;

@interface INAddTasksIntent : INIntent <INAddTasksIntentExport>

@property (nonatomic,copy) NSArray * contactEventTriggers; 
@property (nonatomic,copy,readonly) INTaskList * targetTaskList; 
@property (nonatomic,copy,readonly) NSArray * taskTitles; 
@property (nonatomic,copy,readonly) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (nonatomic,readonly) long long priority; 
@property (assign,nonatomic) long long taskReference; 
@property (nonatomic,copy) NSArray * targetTaskListMembers; 
@property (nonatomic,copy) INContactEventTrigger * contactEventTrigger; 
@property (nonatomic,copy) INIntent * intent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(void)setVerb:(id)arg1 ;
-(INIntent *)intent;
-(INTaskList *)targetTaskList;
-(void)setTargetTaskList:(INTaskList *)arg1 ;
-(NSArray *)targetTaskListMembers;
-(void)setTargetTaskListMembers:(NSArray *)arg1 ;
-(void)setTaskReference:(long long)arg1 ;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(INContactEventTrigger *)arg1 ;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1 ;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(NSArray *)contactEventTriggers;
-(void)setContactEventTriggers:(NSArray *)arg1 ;
-(id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 priority:(long long)arg5 ;
-(id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 ;
-(id)domain;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSArray *)taskTitles;
-(void)setTaskTitles:(NSArray *)arg1 ;
-(long long)taskReference;
-(void)setIntent:(INIntent *)arg1 ;
@end
