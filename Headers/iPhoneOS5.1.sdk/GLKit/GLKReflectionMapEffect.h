/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKit-Structs.h"
#import "GLKNamedEffect.h"
#import "GLKBaseEffect.h"

@class GLKEffectPropertyTexture;

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect> {
@private
	GLKEffectPropertyTexture* _textureCubeMap;
	GLKMatrix3 _matrix;
	BOOL _dirtyUniforms;
	int _matrixLoc;
}
@property(assign, nonatomic) BOOL dirtyUniforms;	// @synthesize=_dirtyUniforms
@property(assign, nonatomic) GLKMatrix3 matrix;	// @synthesize=_matrix
@property(assign, nonatomic) int matrixLoc;	// @synthesize=_matrixLoc
@property(readonly, assign, nonatomic) GLKEffectPropertyTexture* textureCubeMap;	// @synthesize=_textureCubeMap
-(id)init;
-(void)dealloc;
-(id)description;
// declared property getter: -(BOOL)dirtyUniforms;
// declared property getter: -(GLKMatrix3)matrix;
// declared property getter: -(int)matrixLoc;
-(void)prepareToDraw;
// declared property setter: -(void)setDirtyUniforms:(BOOL)uniforms;
// declared property setter: -(void)setMatrix:(GLKMatrix3)matrix;
// declared property setter: -(void)setMatrixLoc:(int)loc;
// declared property getter: -(id)textureCubeMap;
@end

