/* GULP PLUGINS */
var gulp = require('gulp');
var autoprefixer = require('gulp-autoprefixer');
var clean = require('gulp-clean');
var concat = require('gulp-concat');
var connect = require('gulp-connect');
var exec = require('gulp-exec');
var sass = require('gulp-ruby-sass');

/* GULP TASKS */

gulp.task('clean-styles', function() {
    gulp.src('./assets/styles/*.css', {read: false})
        .pipe(clean());
});


gulp.task('clean-styleguide', function() {
  gulp.src('./styleguide/objects.html', {read: false})
    .pipe(clean());
  gulp.src('./styleguide/wysiwyg.html', {read: false})
    .pipe(clean());
  gulp.src('./styleguide/css/*.css', {read: false})
    .pipe(clean());
  gulp.src('./styleguide/scripts/*', {read: false})
    .pipe(clean());
});


gulp.task('hologram', function() {
    gulp.src('')
        .pipe(exec('hologram'));
});

gulp.task('connect', function() {
  connect.server({
    root: ['./styleguide'],
    port: 1337,
    livereload: false
  });
});

//gulp.task('move-samples', function() {
//    gulp.src('templates/samples/*.html')
//        .pipe(gulp.dest('./'))
//});

// gulp.task('html', function () {
//    gulp.src('./styleguide/**/*.html')
//      .pipe(connect.reload());
// });

// gulp.task('watch', function () {
//    gulp.watch(['./styleguide/**/*.html'], ['html']);
// });

// gulp.task('default', ['connect', 'watch']);

gulp.task('watch', function () {
    gulp.watch(['./scss/**/*.scss'], ['build']);
});

gulp.task('theme-sass', function() {
  gulp.src('./scss/homeforlife.scss')
    .pipe(sass({ style: 'expanded' }))
    .pipe(autoprefixer('last 2 version', 'safari 5', 'ie 8', 'ie 9', 'opera 12.1', 'ios 6', 'android 4'))
    .pipe(gulp.dest('./css'))
    .pipe(gulp.dest('./styleguide/css'))
    ;
});

gulp.task('guide-sass', function() {
  gulp.src('./scss/homeforlife.scss')
    .pipe(sass({ style: 'expanded' }))
    .pipe(autoprefixer('last 2 version', 'safari 5', 'ie 8', 'ie 9', 'opera 12.1', 'ios 6', 'android 4'))
    .pipe(gulp.dest('./css'))
    .pipe(gulp.dest('./styleguide/css'))
  ;
});

gulp.task('custom-sass', function() {
  gulp.src('./scss/custom/main.scss')
    .pipe(sass({ style: 'expanded' }))
    .pipe(autoprefixer('last 2 version', 'safari 5', 'ie 8', 'ie 9', 'opera 12.1', 'ios 6', 'android 4'))
    .pipe(gulp.dest('./css'))
    .pipe(gulp.dest('./styleguide/css'))
    ;
});

gulp.task('copy-script', function() {
  gulp.src('./js/*')
    .pipe(gulp.dest('./styleguide/scripts'))
    ;
});

gulp.task('copy-hologram', function(){
  gulp.src('./styleguide/**/*')
    .pipe(gulp.dest('/Users/nblon/Dropbox/Public/styleguide'))
  ;
});



gulp.task('build', function() {
  gulp.run('clean-styles');
  gulp.run('clean-styleguide');
  // gulp.run('theme-sass');
  gulp.run('custom-sass');
  gulp.run('guide-sass');
  gulp.run('copy-script');
  gulp.run('hologram');
});
