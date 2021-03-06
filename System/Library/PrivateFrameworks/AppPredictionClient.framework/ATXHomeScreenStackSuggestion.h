/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ATXHomeScreenWidgetIdentifiable, ATXProactiveSuggestion;

@interface ATXHomeScreenStackSuggestion : NSObject {

	BOOL _isAlreadyInStack;
	BOOL _isLowConfidenceStackRotationForStaleStack;
	NSString* _stackId;
	ATXHomeScreenWidgetIdentifiable* _widget;
	NSString* _suggestionIdentifier;
	ATXProactiveSuggestion* _proactiveSuggestion;

}

@property (nonatomic,copy) NSString * suggestionIdentifier;                               //@synthesize suggestionIdentifier=_suggestionIdentifier - In the implementation block
@property (nonatomic,retain) ATXProactiveSuggestion * proactiveSuggestion;                //@synthesize proactiveSuggestion=_proactiveSuggestion - In the implementation block
@property (assign,nonatomic) BOOL isLowConfidenceStackRotationForStaleStack;              //@synthesize isLowConfidenceStackRotationForStaleStack=_isLowConfidenceStackRotationForStaleStack - In the implementation block
@property (nonatomic,copy) NSString * stackId;                                            //@synthesize stackId=_stackId - In the implementation block
@property (nonatomic,retain) ATXHomeScreenWidgetIdentifiable * widget;                    //@synthesize widget=_widget - In the implementation block
@property (assign,nonatomic) BOOL isAlreadyInStack;                                       //@synthesize isAlreadyInStack=_isAlreadyInStack - In the implementation block
@property (nonatomic,readonly) BOOL isSuggestionWidget; 
-(ATXHomeScreenWidgetIdentifiable *)widget;
-(unsigned long long)hash;
-(void)setWidget:(ATXHomeScreenWidgetIdentifiable *)arg1 ;
-(ATXProactiveSuggestion *)proactiveSuggestion;
-(void)setSuggestionIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)stackId;
-(void)setIsLowConfidenceStackRotationForStaleStack:(BOOL)arg1 ;
-(BOOL)isLowConfidenceStackRotationForStaleStack;
-(NSString *)suggestionIdentifier;
-(void)setProactiveSuggestion:(ATXProactiveSuggestion *)arg1 ;
-(BOOL)isSuggestionWidget;
-(void)setStackId:(NSString *)arg1 ;
-(void)setIsAlreadyInStack:(BOOL)arg1 ;
-(BOOL)isAlreadyInStack;
@end

