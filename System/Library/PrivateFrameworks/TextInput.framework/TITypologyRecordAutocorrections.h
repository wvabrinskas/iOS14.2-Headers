/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TICandidateRequestToken, TIAutocorrectionList;

@interface TITypologyRecordAutocorrections : TITypologyRecord {

	BOOL _listUIDisplayed;
	TIKeyboardState* _keyboardState;
	TICandidateRequestToken* _requestToken;
	TIAutocorrectionList* _autocorrections;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                     //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TICandidateRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * autocorrections;              //@synthesize autocorrections=_autocorrections - In the implementation block
@property (assign,nonatomic) BOOL listUIDisplayed;                                //@synthesize listUIDisplayed=_listUIDisplayed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)replaceDocumentState:(id)arg1 ;
-(TICandidateRequestToken *)requestToken;
-(void)setRequestToken:(TICandidateRequestToken *)arg1 ;
-(TIAutocorrectionList *)autocorrections;
-(void)setAutocorrections:(TIAutocorrectionList *)arg1 ;
-(BOOL)listUIDisplayed;
-(void)setListUIDisplayed:(BOOL)arg1 ;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeContextFromKeyboardState;
-(id)currentKeyboardState;
-(TIKeyboardState *)keyboardState;
-(id)shortDescription;
@end
