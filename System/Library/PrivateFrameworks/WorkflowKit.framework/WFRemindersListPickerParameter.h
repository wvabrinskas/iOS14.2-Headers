/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFRemindersListPickerParameter : WFEnumerationParameter {

	BOOL _allowsAllLists;
	id _defaultSerializedListRepresentation;
	NSArray* _listStates;

}

@property (nonatomic,retain) id defaultSerializedListRepresentation;              //@synthesize defaultSerializedListRepresentation=_defaultSerializedListRepresentation - In the implementation block
@property (nonatomic,retain) NSArray * listStates;                                //@synthesize listStates=_listStates - In the implementation block
@property (nonatomic,readonly) BOOL allowsAllLists;                               //@synthesize allowsAllLists=_allowsAllLists - In the implementation block
-(id)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)reloadStates;
-(BOOL)allowsAllLists;
-(id)defaultSerializedListRepresentation;
-(void)setDefaultSerializedListRepresentation:(id)arg1 ;
-(NSArray *)listStates;
-(void)setListStates:(NSArray *)arg1 ;
@end

